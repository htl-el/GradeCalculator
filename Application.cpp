#include "Application.hpp"
#include "./ui_application.h"

Application::Application(QWidget *parent) : QMainWindow(parent), ui(new Ui::Application)
{
    ui->setupUi(this);
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

