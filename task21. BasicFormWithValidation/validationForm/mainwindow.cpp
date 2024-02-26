#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->submit, &QPushButton::clicked, this, &MainWindow::validateForm);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::validateForm()
{
    if(ui->lineEdit1->text().isEmpty() || ui->lineEdit2->text().isEmpty() || ui->lineEdit3->text().isEmpty())
    {
        QMessageBox::critical(this, "Error", "please fill in all fields.");
    } else {
        QMessageBox::information(this, "Succes", "Form submitted successfully.");
    }
}


