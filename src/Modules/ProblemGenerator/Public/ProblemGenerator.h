#ifndef PROBLEMGENERATOR_H
#define PROBLEMGENERATOR_H

#include <mainwindow.h>
#include <ui_mainwindow.h>
#include <QRandomGenerator>
#include <QString>

// TODO: Hook up signals and slots to the dynamic QLabels

// Answer must be >= 1

// Idea: take the answer of DynNumberOne, plug output into the range
// of the other two variables, guaranteeing it wont be negative as
// they're smaller?
class ProblemGenerator
{

public:
    ProblemGenerator()
        : EProblemVariation{notSet}
        , m_answer{0}
        , m_generatedNumbers{} // zero's all array elements
    {
    }

    friend class AlarmClock;

    void generateProblem();
    void resetVariables();

    enum EProblemVariations
    {
        notSet,
        ppp, // plus plus plus
        ppm, // plus plus minus
        pmp, // plus minus plus
        pmm  // plus minus minus
    } EProblemVariation;



private:
    int m_answer;
    int m_generatedNumbers[3];

    static constexpr int MAX_ANSWER = 90; // Keep as a multiple of three so it divides evenly. Tweak value for difficulty/higher possible outputs
    static constexpr int MAX_NUM_PER_VAR = MAX_ANSWER / 3;

    QString genNumStringOne;
    QString genNumStringTwo;
    QString genNumStringThree;
};
#endif // PROBLEMGENERATOR_H
