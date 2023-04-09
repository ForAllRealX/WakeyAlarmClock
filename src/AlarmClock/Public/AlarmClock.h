#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H

#include <mainwindow.h>
#include <ui_mainwindow.h>

#include <QLabel>
#include <QMediaPlayer>
#include <QAudioOutput>

#include "AlarmUtils/Public/AlarmUtils.h"
#include <ProblemGenerator.h>

class AlarmClock : public QObject, public Ui::MainWindow
{
    Q_OBJECT

public:
    AlarmClock()
        : m_probGenerator{}
        , m_alarmPlayer{new QMediaPlayer}
        , m_audioOutput{new QAudioOutput} //QAudioOutput defaults to the OS's default audio output, which is fine for most purposes in this projects' scope
        , m_correctCounter{0}
    {
        playAudio();
    }

    ~AlarmClock()
    {
        delete m_alarmPlayer;
        delete m_audioOutput;
    }

    friend AlarmUtils::isCorrect_t AlarmUtils::checkAnswer(QLineEdit* lineEd, int answer);
    friend class ProblemGenerator;
    
    ProblemGenerator m_probGenerator;
    static constexpr int NUM_PROBLEMS{ 3 };
    
    void updateLabels();
    
public slots:
    void on_checkAnswerButton_clicked();

private:
    QMediaPlayer* m_alarmPlayer;
    QAudioOutput* m_audioOutput;
    void playAudio();
    int m_correctCounter;

    static constexpr QChar plus = '+';
    static constexpr QChar minus = '-';
};

#endif // ALARMCLOCK_H
