#include <AlarmClock.h>
#include <QString>

class ProblemGenerator;

void AlarmClock::updateLabels()
{
    assert(m_probGenerator.EProblemVariation != ProblemGenerator::EProblemVariations::notSet);

    genNumStringOne = QString::number(m_probGenerator.m_generatedNumbers[0]);
    genNumStringTwo = QString::number(m_probGenerator.m_generatedNumbers[1]);
    genNumStringThree = QString::number(m_probGenerator.m_generatedNumbers[2]);

    if (m_probGenerator.EProblemVariation == ProblemGenerator::ppp)
        {
            dynNumberOne->setText(genNumStringOne);
            dynNumberTwo->setText(genNumStringTwo);
            dynNumberThree->setText(genNumStringThree);
            plusMinusOne->setText(plus);  plusMinusTwo->setText(plus);
        }

    else if (m_probGenerator.EProblemVariation == ProblemGenerator::ppm)
        {
            dynNumberOne->setText(genNumStringOne);
            dynNumberTwo->setText(genNumStringTwo);
            dynNumberThree->setText(genNumStringThree);
            plusMinusOne->setText(plus);  plusMinusTwo->setText(minus);
        }

    else if (m_probGenerator.EProblemVariation == ProblemGenerator::pmp)
        {
            dynNumberOne->setText(genNumStringOne);
            dynNumberTwo->setText(genNumStringTwo);
            dynNumberThree->setText(genNumStringThree);
            plusMinusOne->setText(minus);  plusMinusTwo->setText(plus);
        }

    else if (m_probGenerator.EProblemVariation == ProblemGenerator::pmm)
        {
            dynNumberOne->setText(genNumStringOne);
            dynNumberTwo->setText(genNumStringTwo);
            dynNumberThree->setText(genNumStringThree);
            plusMinusOne->setText(minus);  plusMinusTwo->setText(minus);
        }
}
#if 0

    // if (CheckButtonPressed), then answerLine.read() == answer ? try again : return
    }
}


void AlarmApp::AlarmClock::instantiateAudio()
{
    // Goal of function is to find an audio output from OS, then stream alarm sound to it
}
#endif

