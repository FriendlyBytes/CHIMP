#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include <stdio.h>
#include <QColorDialog>
#include <QColor>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("CHIMP");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName();//TODO fix Gtk-Message warrning. In worst case, use dup and dup2
    //example:
    printf("%s",filename.toUtf8().constData());
    fflush(NULL);

}

// Color picker
void MainWindow::on_actionPaint_triggered()
{
    QColorDialog::getColor(Qt::white, this, "Color picker");
}

//Full screen mode, trenutno se zatvara na Alt+F4
void MainWindow::on_actionFull_Screen_Mode_triggered()
{
    QWidget::showFullScreen();
}
