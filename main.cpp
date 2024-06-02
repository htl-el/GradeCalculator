#include "Application.hpp"
#include "Database.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Application w;
    w.show();

    Database data("list.txt");
    data.addTest("NW", "Test123", 1, 100);
    data.setGrade("NW", 4);

    return a.exec();
}
