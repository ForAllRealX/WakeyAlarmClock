#include <AlarmClock.h>

#include <QString>
#include <qtimer.h>

using namespace AlarmUtils;

void AlarmClock::updateLabels()
{
    assert(m_probGenerator.EProblemVariation != ProblemGenerator::EProblemVariations::notSet);

    dynNumberOne->setText(m_probGenerator.genNumStringOne);
    dynNumberTwo->setText(m_probGenerator.genNumStringTwo);
    dynNumberThree->setText(m_probGenerator.genNumStringThree);

    if (m_probGenerator.EProblemVariation == ProblemGenerator::ppp)
    { plusMinusOne->setText(plus);  plusMinusTwo->setText(plus); }

    else if (m_probGenerator.EProblemVariation == ProblemGenerator::ppm)
    { plusMinusOne->setText(plus);  plusMinusTwo->setText(minus); }

    else if (m_probGenerator.EProblemVariation == ProblemGenerator::pmp)
    { plusMinusOne->setText(minus);  plusMinusTwo->setText(plus); }

    else if (m_probGenerator.EProblemVariation == ProblemGenerator::pmm)
    { plusMinusOne->setText(minus);  plusMinusTwo->setText(minus); }    
}

void AlarmClock::on_checkAnswerButton_clicked()
{
    // Read the text currently sitting inside the answerLine, and compare it to the actual answer
    if (checkAnswer(answerLine, m_probGenerator.getAnswer()) == true)
    {
        progressBar->valueChanged(++m_correctCounter);        
        progressBar->setValue(m_correctCounter);

        if (progressBar->value() < NUM_PROBLEMS)
        {
            m_probGenerator.generateProblem();
            updateLabels();
        }
        else // Else all questions are completed. So create a Good Job label, fade widgets, and exit program. If theres a nicer way to do this, let me know!
        {
            const QFont font(QString("Segoe UI Historic"), 36);

            QLabel* greatJobLabel{ new QLabel(centralwidget)};
            greatJobLabel->setGeometry(140, 210, 800, 65);
            greatJobLabel->setText(QString("Great Job! Have a pleasant day today."));
            greatJobLabel->setFont(font);
            greatJobLabel->show();

            fadeWidget(decorativeLine, fadeType::fadeOut);
            fadeWidget(decorativeLine_2, fadeType::fadeOut);
            fadeWidget(dynNumberOne, fadeType::fadeOut);
            fadeWidget(dynNumberTwo, fadeType::fadeOut);
            fadeWidget(dynNumberThree, fadeType::fadeOut);
            fadeWidget(plusMinusOne, fadeType::fadeOut);
            fadeWidget(plusMinusTwo, fadeType::fadeOut);
            fadeWidget(solveQuestionBanner, fadeType::fadeOut);
            fadeWidget(yourAnswerBanner, fadeType::fadeOut);
            fadeWidget(progressBar, fadeType::fadeOut);
            fadeWidget(answerLine, fadeType::fadeOut);
            fadeWidget(checkAnswerButton, fadeType::fadeOut);

            fadeWidget(greatJobLabel, fadeType::fadeIn);

            // QTimer lambda to wait 8 seconds to allow the text to fade and be read by the user.
            QTimer::singleShot(8000, this, [this]() 
            {
                return QApplication::exit();
            });
        }   
    }
}