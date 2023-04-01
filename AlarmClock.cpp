#include <AlarmClock.h>

#include <QString>

class ProblemGenerator;

void AlarmClock::updateLabels()
{
    assert(m_probGenerator.EProblemVariation != ProblemGenerator::EProblemVariations::notSet);

    if (m_probGenerator.EProblemVariation == ProblemGenerator::ppp)
        {
            dynNumberOne->setText(m_probGenerator.genNumStringOne);
            dynNumberTwo->setText(m_probGenerator.genNumStringTwo);
            dynNumberThree->setText(m_probGenerator.genNumStringThree);
            plusMinusOne->setText(plus);  plusMinusTwo->setText(plus);
        }

    else if (m_probGenerator.EProblemVariation == ProblemGenerator::ppm)
        {
            dynNumberOne->setText(m_probGenerator.genNumStringOne);
            dynNumberTwo->setText(m_probGenerator.genNumStringTwo);
            dynNumberThree->setText(m_probGenerator.genNumStringThree);
            plusMinusOne->setText(plus);  plusMinusTwo->setText(minus);
        }

    else if (m_probGenerator.EProblemVariation == ProblemGenerator::pmp)
        {
            dynNumberOne->setText(m_probGenerator.genNumStringOne);
            dynNumberTwo->setText(m_probGenerator.genNumStringTwo);
            dynNumberThree->setText(m_probGenerator.genNumStringThree);
            plusMinusOne->setText(minus);  plusMinusTwo->setText(plus);
        }

    else if (m_probGenerator.EProblemVariation == ProblemGenerator::pmm)
        {
            dynNumberOne->setText(m_probGenerator.genNumStringOne);
            dynNumberTwo->setText(m_probGenerator.genNumStringTwo);
            dynNumberThree->setText(m_probGenerator.genNumStringThree);
            plusMinusOne->setText(minus);  plusMinusTwo->setText(minus);
        }
}

#if 0
void checkInput()
{
    // if (CheckButtonPressed), then answerLine.read() == answer ? try again : return
    }
}
#endif

