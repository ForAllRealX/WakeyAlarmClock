#include <AlarmClock.h>

#include <QString>

#include <QMediaPlayer>
#include <QAudioOutput>

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

void AlarmClock::playAudio()
{
    QMediaPlayer* alarmPlayer = new QMediaPlayer;

    //QAudioOutput defaults to the OS's default audio output, which is fine for most purposes in this projects' scope
    QAudioOutput*  audioOutput = new QAudioOutput;
    alarmPlayer->setAudioOutput(audioOutput);

    // TODO: Don't hardcode location here. Find a location where it'd be in a release build
    alarmPlayer->setSource(QUrl::fromLocalFile("/Users/GD/Documents/AlarmClock/Audio/Assets/AlarmSound.mp3"));
    alarmPlayer->setLoops(QMediaPlayer::Loops::Infinite);

    alarmPlayer->play();
}

#if 0

    // if (CheckButtonPressed), then answerLine.read() == answer ? try again : return
    }
}
#endif

