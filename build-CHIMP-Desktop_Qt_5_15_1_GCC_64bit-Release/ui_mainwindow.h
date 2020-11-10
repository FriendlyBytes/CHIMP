/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionOpen;
    QAction *actionNew;
    QAction *actionCome_to_the_dark_side;
    QAction *actionLight;
    QAction *actionClose;
    QAction *actionCustom;
    QAction *actionClose_All;
    QAction *actionQuit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSize;
    QAction *actionFull_Screen_Mode;
    QAction *actionNew_Window;
    QAction *actionClose_2;
    QAction *actionAbout_CHIMP;
    QAction *actionShortcuts;
    QAction *actionDark;
    QAction *actionClassic;
    QAction *actionCustom_2;
    QAction *zoom_in;
    QAction *actionZoomOut;
    QAction *actionText;
    QAction *actionBrush;
    QAction *actionPaint;
    QAction *actionPencil;
    QAction *actionEraser;
    QAction *actionCrop;
    QAction *actionBlur;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar;
    QFrame *frame;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QProgressBar *progressBar;
    QPushButton *pushButton_5;
    QFrame *frame_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QLabel *label_4;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuSettings;
    QMenu *menuTheme_2;
    QMenu *menuImage;
    QMenu *menuView;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(966, 706);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionCome_to_the_dark_side = new QAction(MainWindow);
        actionCome_to_the_dark_side->setObjectName(QString::fromUtf8("actionCome_to_the_dark_side"));
        actionLight = new QAction(MainWindow);
        actionLight->setObjectName(QString::fromUtf8("actionLight"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionCustom = new QAction(MainWindow);
        actionCustom->setObjectName(QString::fromUtf8("actionCustom"));
        actionClose_All = new QAction(MainWindow);
        actionClose_All->setObjectName(QString::fromUtf8("actionClose_All"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionSize = new QAction(MainWindow);
        actionSize->setObjectName(QString::fromUtf8("actionSize"));
        actionFull_Screen_Mode = new QAction(MainWindow);
        actionFull_Screen_Mode->setObjectName(QString::fromUtf8("actionFull_Screen_Mode"));
        actionNew_Window = new QAction(MainWindow);
        actionNew_Window->setObjectName(QString::fromUtf8("actionNew_Window"));
        actionClose_2 = new QAction(MainWindow);
        actionClose_2->setObjectName(QString::fromUtf8("actionClose_2"));
        actionAbout_CHIMP = new QAction(MainWindow);
        actionAbout_CHIMP->setObjectName(QString::fromUtf8("actionAbout_CHIMP"));
        actionShortcuts = new QAction(MainWindow);
        actionShortcuts->setObjectName(QString::fromUtf8("actionShortcuts"));
        actionDark = new QAction(MainWindow);
        actionDark->setObjectName(QString::fromUtf8("actionDark"));
        actionClassic = new QAction(MainWindow);
        actionClassic->setObjectName(QString::fromUtf8("actionClassic"));
        actionCustom_2 = new QAction(MainWindow);
        actionCustom_2->setObjectName(QString::fromUtf8("actionCustom_2"));
        zoom_in = new QAction(MainWindow);
        zoom_in->setObjectName(QString::fromUtf8("zoom_in"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icons/003-zoom in.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoom_in->setIcon(icon);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icons/004-zoom out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon1);
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icons/048-type.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText->setIcon(icon2);
        actionBrush = new QAction(MainWindow);
        actionBrush->setObjectName(QString::fromUtf8("actionBrush"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icons/038-paint brush.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBrush->setIcon(icon3);
        actionPaint = new QAction(MainWindow);
        actionPaint->setObjectName(QString::fromUtf8("actionPaint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icons/031-paint bucket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaint->setIcon(icon4);
        actionPencil = new QAction(MainWindow);
        actionPencil->setObjectName(QString::fromUtf8("actionPencil"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/icons/024-pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPencil->setIcon(icon5);
        actionEraser = new QAction(MainWindow);
        actionEraser->setObjectName(QString::fromUtf8("actionEraser"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/icons/025-eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraser->setIcon(icon6);
        actionCrop = new QAction(MainWindow);
        actionCrop->setObjectName(QString::fromUtf8("actionCrop"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/icons/034-crop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrop->setIcon(icon7);
        actionBlur = new QAction(MainWindow);
        actionBlur->setObjectName(QString::fromUtf8("actionBlur"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/icons/032-blur.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBlur->setIcon(icon8);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(220, 30, 721, 551));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 719, 549));
        horizontalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(10, 520, 671, 20));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(690, 0, 20, 531));
        verticalScrollBar->setOrientation(Qt::Vertical);
        scrollArea->setWidget(scrollAreaWidgetContents);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 30, 181, 171));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalSlider = new QSlider(frame);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 40, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(frame);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(10, 90, 160, 16));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(frame);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(10, 140, 160, 16));
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 26));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 98, 26));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 98, 26));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 210, 181, 171));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 10, 161, 31));
        pushButton_6 = new QPushButton(frame_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 90, 161, 34));
        progressBar = new QProgressBar(frame_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 140, 161, 21));
        progressBar->setValue(24);
        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 50, 161, 31));
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(20, 390, 181, 191));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(frame_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 40, 161, 101));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 111, 26));
        comboBox = new QComboBox(frame_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 150, 161, 34));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 966, 31));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuTheme_2 = new QMenu(menuSettings);
        menuTheme_2->setObjectName(QString::fromUtf8("menuTheme_2"));
        menuImage = new QMenu(menubar);
        menuImage->setObjectName(QString::fromUtf8("menuImage"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuImage->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addAction(actionClose_All);
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuSettings->addAction(menuTheme_2->menuAction());
        menuTheme_2->addAction(actionDark);
        menuTheme_2->addAction(actionClassic);
        menuTheme_2->addAction(actionCustom_2);
        menuImage->addAction(actionSize);
        menuView->addAction(actionFull_Screen_Mode);
        menuWindow->addAction(actionNew_Window);
        menuWindow->addAction(actionClose_2);
        menuHelp->addAction(actionAbout_CHIMP);
        menuHelp->addAction(actionShortcuts);
        toolBar->addAction(zoom_in);
        toolBar->addAction(actionZoomOut);
        toolBar->addAction(actionText);
        toolBar->addAction(actionBrush);
        toolBar->addAction(actionPaint);
        toolBar->addAction(actionPencil);
        toolBar->addAction(actionEraser);
        toolBar->addAction(actionCrop);
        toolBar->addAction(actionBlur);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCome_to_the_dark_side->setText(QCoreApplication::translate("MainWindow", "Come to the dark side", nullptr));
        actionLight->setText(QCoreApplication::translate("MainWindow", "Classic", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        actionCustom->setText(QCoreApplication::translate("MainWindow", "Custom", nullptr));
        actionClose_All->setText(QCoreApplication::translate("MainWindow", "Close All", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSize->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        actionFull_Screen_Mode->setText(QCoreApplication::translate("MainWindow", "Full Screen Mode", nullptr));
#if QT_CONFIG(shortcut)
        actionFull_Screen_Mode->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_Window->setText(QCoreApplication::translate("MainWindow", "New Window", nullptr));
        actionClose_2->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        actionAbout_CHIMP->setText(QCoreApplication::translate("MainWindow", "About CHIMP", nullptr));
        actionShortcuts->setText(QCoreApplication::translate("MainWindow", "Shortcuts", nullptr));
        actionDark->setText(QCoreApplication::translate("MainWindow", "Come to the dark side", nullptr));
        actionClassic->setText(QCoreApplication::translate("MainWindow", "Classic", nullptr));
        actionCustom_2->setText(QCoreApplication::translate("MainWindow", "Custom", nullptr));
        zoom_in->setText(QCoreApplication::translate("MainWindow", "zoom_in", nullptr));
#if QT_CONFIG(shortcut)
        zoom_in->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "ZoomOut", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionText->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
#if QT_CONFIG(shortcut)
        actionText->setShortcut(QCoreApplication::translate("MainWindow", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBrush->setText(QCoreApplication::translate("MainWindow", "Brush", nullptr));
        actionPaint->setText(QCoreApplication::translate("MainWindow", "Paint", nullptr));
#if QT_CONFIG(shortcut)
        actionPaint->setShortcut(QCoreApplication::translate("MainWindow", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPencil->setText(QCoreApplication::translate("MainWindow", "Pencil", nullptr));
        actionEraser->setText(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
        actionCrop->setText(QCoreApplication::translate("MainWindow", "Crop", nullptr));
#if QT_CONFIG(shortcut)
        actionCrop->setShortcut(QCoreApplication::translate("MainWindow", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBlur->setText(QCoreApplication::translate("MainWindow", "Blur", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Brightness", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Whites", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Blacks", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Highlights", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Shadows", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Color filter", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuTheme_2->setTitle(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        menuImage->setTitle(QCoreApplication::translate("MainWindow", "Image", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "Window", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
