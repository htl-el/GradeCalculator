#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <QMainWindow>
#include <QListView>
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

    void listSubjects(unsigned int year);

private:
    QTableWidget *tableWidget;
    Ui::Application *ui;
    QListView *listView;

private slots:
    void on_addSubject_triggered(bool checked);

    void on_addGrade_triggered(bool checked);

    void on_removeGrade_triggered(bool checked);

    void on_removeSubject_triggered(bool checked);
    void on_listView_objectNameChanged(const QString &objectName);
};
#endif // APPLICATION_HPP
