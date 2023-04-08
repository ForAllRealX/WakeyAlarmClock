#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <AlarmClock.h>
#include <qvalidator.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // TODO: Fix this so as to be able to delete it, as it is a a memory leak
    const QValidator* inputValidator = { new QIntValidator(ProblemGenerator::MIN_ANSWER, ProblemGenerator::MAX_ANSWER) }; // to restrict the answerLine Widgets' input
    ui->answerLine->setValidator(inputValidator);
}

MainWindow::~MainWindow()
{
    delete ui;
    
}

void MainWindow::on_checkAnswerButton_clicked()
{}

