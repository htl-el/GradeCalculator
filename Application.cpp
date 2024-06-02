#include "Application.hpp"
#include "./ui_application.h"

#include <QApplication>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QWidget>
#include <QStringListModel>
#include <QStandardItemModel>

Application::Application(QWidget *parent) : QMainWindow(parent), ui(new Ui::Application)
{  
    ui->setupUi(this);

    // Initialisiere das QListView als Mitglied von Application
    listView = new QListView(this);
    listView->setFixedSize(200, 500); // Setze die Größe des QListView auf 200x100 Pixel

    // Initialisiere das Modell
    QStandardItemModel *model = new QStandardItemModel(this);

    // Füge die Items hinzu und setze sie auf read-only
    QList<QStandardItem *> items;
    items.append(new QStandardItem("Item 1"));
    items.append(new QStandardItem("Item 2"));
    items.append(new QStandardItem("Item 3"));
    items.append(new QStandardItem("Item 1"));
    items.append(new QStandardItem("Item 2"));
    items.append(new QStandardItem("Item 3"));
    items.append(new QStandardItem("Item 1"));
    items.append(new QStandardItem("Item 2"));
    items.append(new QStandardItem("Item 3"));

    for (QStandardItem *item : items)
    {
        item->setEditable(false);  // Setze das Item auf read-only
        model->appendRow(item);
    }

    // Setze das Modell auf das QListView
    listView->setModel(model);

    // Füge das QListView dem Layout des zentralen Widgets hinzu
    QVBoxLayout *layout = new QVBoxLayout(ui->centralwidget);
    layout->addWidget(listView);
    ui->centralwidget->setLayout(layout);
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


void Application::listSubjects(unsigned int year)
{
    QListView* listView = new QListView();
    listView->setItemAlignment(Qt::AlignCenter);
}
