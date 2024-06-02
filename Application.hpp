#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <QMainWindow>
#include <QWidget>
#include <QTableWidget>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui
{
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
    QTableWidget *tableWidget;

private slots:
    void on_actiondfg_2_triggered(bool checked);

    void on_AddSubject_triggered(bool checked);

    void on_addSubject_triggered(bool checked);

    void on_addGrade_triggered(bool checked);

    void on_removeGrade_triggered(bool checked);

    void on_removeSubject_triggered(bool checked);

private:
    Ui::Application *ui;
};
#endif // APPLICATION_HPP
