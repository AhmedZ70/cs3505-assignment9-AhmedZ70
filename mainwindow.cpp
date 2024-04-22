#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "levelonewidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    levelsUi(new LevelsView())

{
    ui->setupUi(this);
    ui->stackedWidget->addWidget(levelsUi);

    connect(levelsUi, SIGNAL(homeClicked()), this, SLOT(moveHome()));

    connect(ui->quitButton, &QPushButton::clicked, this, &QCoreApplication::quit, Qt::QueuedConnection);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete levelsUi;
}

void MainWindow::on_playButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(levelsUi));
}

void MainWindow::moveHome()
{
    ui->stackedWidget->setCurrentIndex(0);
}



