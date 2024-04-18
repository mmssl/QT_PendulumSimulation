/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionRestart;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *OK_button;
    QPushButton *RESET_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_length;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_Pendulum;
    QMenuBar *menubar;
    QMenu *menuFunctions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName("actionStart");
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName("actionStop");
        actionRestart = new QAction(MainWindow);
        actionRestart->setObjectName("actionRestart");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 50, 191, 181));
        OK_button = new QPushButton(groupBox);
        OK_button->setObjectName("OK_button");
        OK_button->setGeometry(QRect(120, 110, 51, 21));
        RESET_button = new QPushButton(groupBox);
        RESET_button->setObjectName("RESET_button");
        RESET_button->setGeometry(QRect(120, 140, 51, 21));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 70, 153, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_length = new QLineEdit(widget);
        lineEdit_length->setObjectName("lineEdit_length");

        horizontalLayout->addWidget(lineEdit_length);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 240, 191, 101));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 60, 161, 21));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        label_Pendulum = new QLabel(widget1);
        label_Pendulum->setObjectName("label_Pendulum");

        horizontalLayout_2->addWidget(label_Pendulum);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFunctions = new QMenu(menubar);
        menuFunctions->setObjectName("menuFunctions");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFunctions->menuAction());
        menuFunctions->addAction(actionStart);
        menuFunctions->addAction(actionStop);
        menuFunctions->addAction(actionRestart);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        actionStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        actionRestart->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Pendulum Settings", nullptr));
        OK_button->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        RESET_button->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Length:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Period", nullptr));
        label_Pendulum->setText(QString());
        menuFunctions->setTitle(QCoreApplication::translate("MainWindow", "Functions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
