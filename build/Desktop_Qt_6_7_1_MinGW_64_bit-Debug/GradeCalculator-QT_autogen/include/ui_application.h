/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName("Application");
        Application->resize(800, 600);
        centralwidget = new QWidget(Application);
        centralwidget->setObjectName("centralwidget");
        Application->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Application);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Application->setMenuBar(menubar);
        statusbar = new QStatusBar(Application);
        statusbar->setObjectName("statusbar");
        Application->setStatusBar(statusbar);

        retranslateUi(Application);

        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QMainWindow *Application)
    {
        Application->setWindowTitle(QCoreApplication::translate("Application", "Application", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
