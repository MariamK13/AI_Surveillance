/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit3;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit1;
    QPushButton *submit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 80, 421, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        lineEdit3 = new QLineEdit(widget);
        lineEdit3->setObjectName("lineEdit3");

        verticalLayout->addWidget(lineEdit3);

        lineEdit2 = new QLineEdit(widget);
        lineEdit2->setObjectName("lineEdit2");

        verticalLayout->addWidget(lineEdit2);

        lineEdit1 = new QLineEdit(widget);
        lineEdit1->setObjectName("lineEdit1");

        verticalLayout->addWidget(lineEdit1);

        submit = new QPushButton(widget);
        submit->setObjectName("submit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(20);
        sizePolicy.setVerticalStretch(20);
        sizePolicy.setHeightForWidth(submit->sizePolicy().hasHeightForWidth());
        submit->setSizePolicy(sizePolicy);
        submit->setMaximumSize(QSize(100, 100));
        submit->setIconSize(QSize(60, 60));

        verticalLayout->addWidget(submit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit3->setText(QCoreApplication::translate("MainWindow", "lineEdit3", nullptr));
        lineEdit2->setText(QCoreApplication::translate("MainWindow", "lineEdit2", nullptr));
        lineEdit1->setText(QCoreApplication::translate("MainWindow", "lineEdit1", nullptr));
        submit->setText(QCoreApplication::translate("MainWindow", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
