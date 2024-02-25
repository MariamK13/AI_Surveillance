#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    count = 0;

    connect(ui -> click, SIGNAL(clicked()), this, SLOT(on_click_clicked()));
    ui -> click -> setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_click_clicked()
{
   // QString newLabel;
  //  int count = ui -> click -> text().toInt();

    if (ui -> click -> isChecked()) {
        count += 1;
        //newLabel = QString::number(count);
    }

    ui -> label -> setText(QString::number(count));
    ui -> click -> setChecked(false);
}

