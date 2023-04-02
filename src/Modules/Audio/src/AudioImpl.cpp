#include "AlarmClock/Public/AlarmClock.h"

void AlarmClock::playAudio()
{
    alarmPlayer->setAudioOutput(audioOutput);

    // TODO: Don't hardcode location here. Find a location where it'd be in a release build
    alarmPlayer->setSource(QUrl::fromLocalFile("/Users/GD/Documents/AlarmClock/src/Modules/Audio/Assets/AlarmSound.mp3"));
    alarmPlayer->setLoops(QMediaPlayer::Loops::Infinite);

    alarmPlayer->play();
}
