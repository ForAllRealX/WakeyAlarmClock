#include <ProblemGenerator.h>
// TODO: Hook up signals and slots for CheckButton being pressed, and compare answer to actual answer

// TODO: Find more elegant way to assign numbers and signs to the labels.
// Use if statements since switch requires compile time const expressions. Can't do that with runtime RNG :(

void ProblemGenerator::resetVariables()
{
    for (int iii = 0; iii < 3; iii++)
        m_generatedNumbers[iii] = 0;

    m_answer = 0; 
}

void ProblemGenerator::generateProblem()
{
    EProblemVariation = (EProblemVariations)QRandomGenerator::global()->bounded(1, 5);

    if ((EProblemVariation != notSet)) //&& (EProblemVariation != notSet))
    {
        do
        {
            resetVariables();

            // TODO: Determine if a smarter for loop is faster than generating & discarding until answer >= 1. It'd get rid of do while loop too
            for (int iii = 0; iii <= 2; iii++)
                m_generatedNumbers[iii] = QRandomGenerator::global()->bounded(1,MAX_NUM_PER_VAR);

            if (EProblemVariation == ppp)
                for (int iii = 0; iii <= 2; iii++)
                    m_answer += m_generatedNumbers[iii];

            else if (EProblemVariation == ppm)
                m_answer = m_generatedNumbers[0] + m_generatedNumbers[1] - m_generatedNumbers[2];
            else if (EProblemVariation == pmp)
                m_answer = m_generatedNumbers[0] - m_generatedNumbers[1] + m_generatedNumbers[2];
            else if (EProblemVariation == pmm)
                m_answer = m_generatedNumbers[0] - m_generatedNumbers[1] - m_generatedNumbers[2];

        } while (m_answer < 1);
    }
        genNumStringOne = QString::number(m_generatedNumbers[0]);
        genNumStringTwo = QString::number(m_generatedNumbers[1]);
        genNumStringThree = QString::number(m_generatedNumbers[2]);
}

























