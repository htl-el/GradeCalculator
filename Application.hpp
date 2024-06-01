#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Application;
}
QT_END_NAMESPACE

class Application : public QMainWindow
{
    Q_OBJECT

public:
    Application(QWidget *parent = nullptr);
    ~Application();

private:
    Ui::Application *ui;
};
#endif // APPLICATION_HPP