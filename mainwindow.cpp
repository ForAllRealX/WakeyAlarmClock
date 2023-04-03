#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <AlarmClock.h>
#include "src/Modules/AnswerHandling/Public/AnswerHandlingUtils.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ui->answerLine->setValidator(AnswerHandlingUtils::setInputValidator());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkAnswerButton_clicked()
{   
#if 0
    if (AnswerHandlingUtils::checkAnswer(ui->answerLine, m_probGenerator.getAnswer()));
    {
        ui->++progressBar.number;
        m_probGenerator.generateProblem();
    }
#endif
}

