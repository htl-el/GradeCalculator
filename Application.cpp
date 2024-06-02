#include "Application.hpp"
#include "./ui_application.h"

#include <QApplication>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QWidget>

Application::Application(QWidget *parent) : QMainWindow(parent), ui(new Ui::Application)
{
    ui->setupUi(this);

    // Initialisieren des QTableWidget
    tableWidget = new QTableWidget(4, 3, this); // 4 Zeilen, 3 Spalten
    tableWidget->setHorizontalHeaderLabels({"Spalte 1", "Spalte 2", "Spalte 3"});

    // Daten in die Tabelle schreiben
    tableWidget->setItem(0, 0, new QTableWidgetItem("Zeile 1, Spalte 1"));
    tableWidget->setItem(0, 1, new QTableWidgetItem("Zeile 1, Spalte 2"));
    tableWidget->setItem(0, 2, new QTableWidgetItem("Zeile 1, Spalte 3"));

    tableWidget->setItem(1, 0, new QTableWidgetItem("Zeile 2, Spalte 1"));
    tableWidget->setItem(1, 1, new QTableWidgetItem("Zeile 2, Spalte 2"));
    tableWidget->setItem(1, 2, new QTableWidgetItem("Zeile 2, Spalte 3"));

    // Fügen Sie den QTableWidget dem Layout hinzu
    ui->centralwidget->layout()->addWidget(tableWidget);
}

Application::~Application()
{
    delete ui;
}


void Application::on_addSubject_triggered(bool checked)
{

}


void Application::on_addGrade_triggered(bool checked)
{

}


void Application::on_removeGrade_triggered(bool checked)
{

}


void Application::on_removeSubject_triggered(bool checked)
{

}

