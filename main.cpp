#include "Application.hpp"
#include "Database.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Application w;
    w.show();

    Database data("list.txt");
    data.addSubject("Mathe", 5);

    return a.exec();
}
