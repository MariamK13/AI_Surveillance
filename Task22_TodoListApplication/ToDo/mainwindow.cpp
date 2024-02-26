#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->add_2, &QPushButton::clicked, this, &MainWindow::add_2_clicked);
    connect(ui->remove, &QPushButton::clicked, this, &MainWindow::remove_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add_2_clicked()
{
    QString task = ui->input->text();
    if (!task.isEmpty()) {
        ui->list->addItem(task);
        ui->input->clear();
    } else {
        QMessageBox::warning(this, "Warning", "Enter a task, please");
    }
}


void MainWindow::remove_clicked()
{
    int selectedItem = ui->list->currentRow();
    if (selectedItem < 0) {
        QMessageBox::warning(this, "Warning", "Select a task to remove, please");
    } else {
        delete ui->list->takeItem(selectedItem);
    }
}

