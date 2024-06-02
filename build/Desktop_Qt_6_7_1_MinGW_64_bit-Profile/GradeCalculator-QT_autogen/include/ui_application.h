/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QAction *addSubject;
    QAction *addGrade;
    QAction *removeGrade;
    QAction *removeSubject;
    QAction *actionImpressum;
    QAction *actionKontakt;
    QAction *actionHilfe;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QDateEdit *dateEdit;
    QTableWidget *tableWidget;
    QListWidget *listWidget_2;
    QMenuBar *menubar;
    QMenu *menuExtras;
    QMenu *menuCredits;
    QMenu *Options;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName("Application");
        Application->resize(819, 598);
        addSubject = new QAction(Application);
        addSubject->setObjectName("addSubject");
        addGrade = new QAction(Application);
        addGrade->setObjectName("addGrade");
        removeGrade = new QAction(Application);
        removeGrade->setObjectName("removeGrade");
        removeSubject = new QAction(Application);
        removeSubject->setObjectName("removeSubject");
        actionImpressum = new QAction(Application);
        actionImpressum->setObjectName("actionImpressum");
        actionKontakt = new QAction(Application);
        actionKontakt->setObjectName("actionKontakt");
        actionHilfe = new QAction(Application);
        actionHilfe->setObjectName("actionHilfe");
        centralwidget = new QWidget(Application);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 50, 201, 491));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(10, 10, 201, 31));
        dateEdit->setDate(QDate(2020, 1, 1));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 14)
            tableWidget->setRowCount(14);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(220, 10, 571, 441));
        tableWidget->setIconSize(QSize(0, 0));
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setRowCount(14);
        tableWidget->setColumnCount(5);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        listWidget_2 = new QListWidget(centralwidget);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem->setFont(font);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem1->setFont(font);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem2->setFont(font);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem3->setFont(font);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(220, 460, 571, 81));
        Application->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Application);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 819, 25));
        menuExtras = new QMenu(menubar);
        menuExtras->setObjectName("menuExtras");
        menuCredits = new QMenu(menubar);
        menuCredits->setObjectName("menuCredits");
        Options = new QMenu(menubar);
        Options->setObjectName("Options");
        Application->setMenuBar(menubar);
        statusbar = new QStatusBar(Application);
        statusbar->setObjectName("statusbar");
        Application->setStatusBar(statusbar);

        menubar->addAction(Options->menuAction());
        menubar->addAction(menuExtras->menuAction());
        menubar->addAction(menuCredits->menuAction());
        menuCredits->addAction(actionImpressum);
        menuCredits->addAction(actionKontakt);
        menuCredits->addAction(actionHilfe);
        Options->addAction(addSubject);
        Options->addAction(addGrade);
        Options->addAction(removeGrade);
        Options->addAction(removeSubject);

        retranslateUi(Application);

        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QMainWindow *Application)
    {
        Application->setWindowTitle(QCoreApplication::translate("Application", "Application", nullptr));
        addSubject->setText(QCoreApplication::translate("Application", "Add Subject", nullptr));
        addGrade->setText(QCoreApplication::translate("Application", "Add Grade", nullptr));
        removeGrade->setText(QCoreApplication::translate("Application", "Remove Grade", nullptr));
        removeSubject->setText(QCoreApplication::translate("Application", "Remove Subject", nullptr));
        actionImpressum->setText(QCoreApplication::translate("Application", "Impressum", nullptr));
        actionKontakt->setText(QCoreApplication::translate("Application", "Kontakt", nullptr));
        actionHilfe->setText(QCoreApplication::translate("Application", "Hilfe", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("Application", "yyyy", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Application", "Test", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Application", "Note", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Application", "Punkte", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Application", "Datum", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Application", "Halbjahr", nullptr));

        const bool __sortingEnabled = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_2->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Application", "Jahr:", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_2->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Application", "Durchschnitt:", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_2->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Application", "Positiv:", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_2->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Application", "Schlechteste Note:", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled);

        menuExtras->setTitle(QCoreApplication::translate("Application", "Extras", nullptr));
        menuCredits->setTitle(QCoreApplication::translate("Application", "Credits", nullptr));
        Options->setTitle(QCoreApplication::translate("Application", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
