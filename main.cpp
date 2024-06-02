#include "Application.hpp"
//#include "Database.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Application w;

   /* Application demo;
    demo.setWindowTitle("QTableWidget Demo");
    demo.setGeometry(100, 100, 600, 400);
    demo.show();*/


    w.show();

    QApplication app(argc, argv);



    return a.exec();
}
