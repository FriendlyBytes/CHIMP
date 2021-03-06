#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QShortcut>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void actionOpen();
private slots:
    void on_actionOpen_triggered();

    void on_actionPaint_triggered();

    void on_actionFull_Screen_Mode_triggered();

    void on_actionQuit_triggered();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
