#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qregularexpression.h"

double calcVal = 0.0;
bool divButton = false;
bool mulButton = false;
bool subButton = false;
bool addButton = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->display->setText(QString::number(calcVal));
    QPushButton* numButtons[10];
    for (int i = 0; i < 10; ++i) {
        QString buttonName = "Button" + QString::number(i);
        numButtons[i] = MainWindow::findChild<QPushButton *>(buttonName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }
    connect(ui->add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->sub, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->mul, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->equal, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));
   connect(ui->clear, SIGNAL(released()), this,
            SLOT(clearButtonPressed()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NumPressed(){
    QPushButton *button = (QPushButton *) sender();
    QString clickedVal = button->text();
    QString displayVal = ui->display->text();
    if ((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)) {
        ui->display->setText(clickedVal);
    } else {
        QString newVal = displayVal + clickedVal;
        double newdblVal = newVal.toDouble();
        ui->display->setText(QString::number(newdblVal, 'g', 16));
    }
}

void MainWindow::MathButtonPressed() {
    divButton = false;
    mulButton = false;
    subButton = false;
    addButton = false;
    QString displayVal = ui->display->text();
    calcVal = displayVal.toDouble();
    QPushButton* button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divButton = true;
    } else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        mulButton = true;
    } else if (QString::compare(butVal, "-", Qt::CaseInsensitive) == 0){
        subButton = true;
    } else {
        addButton = true;
    }
    ui->display->setText("");
}

void MainWindow::EqualButtonPressed() {
    double solution = 0.0;
    QString displayVal = ui->display->text();
    double dblVal = displayVal.toDouble();
    if (divButton || mulButton || subButton || addButton) {
        if (addButton) {
            solution = calcVal + dblVal;
        } else if (subButton) {
            solution = calcVal - dblVal;
        } else if (mulButton) {
            solution = calcVal * dblVal;
        } else {
            solution = calcVal / dblVal;
        }
    }
    ui->display->setText(QString::number(solution));
}

void MainWindow::clearButtonPressed(){
    divButton = false;
    mulButton = false;
    subButton = false;
    addButton = false;
    QString displayVal = ui->display->text();
    ui->display->setText("0");
}

void MainWindow::on_button1_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "1");
}


void MainWindow::on_button2_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "2");
}


void MainWindow::on_button3_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "3");
}

void MainWindow::on_button4_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "4");
}



void MainWindow::on_button5_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "5");
}



void MainWindow::on_button6_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "6");
}


void MainWindow::on_button7_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "7");
}


void MainWindow::on_button8_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "8");
}


void MainWindow::on_button9_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "9");
}




void MainWindow::on_button0_clicked()
{
    QString displayVal = ui->display->text();
    ui->display->setText(displayVal + "0");
}

