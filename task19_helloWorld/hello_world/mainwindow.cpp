#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->our1stlabel->setText("Hello, World");
}

MainWindow::~MainWindow()
{
    delete ui;
}
