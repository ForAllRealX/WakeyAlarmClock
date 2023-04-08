#include <AlarmClock.h>
#include <QString>

// Intentional decision to use, as this is a small and harmless file
using namespace AnswerHandlingUtils;

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
        m_correctCounter++;
        progressBar->setValue(m_correctCounter);

        m_probGenerator.generateProblem();
        return;
    }

    else return;
}

int AlarmClock::getCorrectCounter() const
{
    
    return m_correctCounter;
}

