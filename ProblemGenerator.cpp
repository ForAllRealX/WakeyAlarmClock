#include <ProblemGenerator.h>
// TODO: Hook up signals and slots for CheckButton being pressed, and compare answer to actual answer
// TODO: Put in logic to ensure the three variables are >= 1

// TODO: Find more elegant way to assign numbers and signs to the labels. Look at multithreading, and/or splitting the functions up
// Use if statements since switch requires compile time const expressions. Can't do that with runtime RNG :(

void ProblemGenerator::resetVariables()
{
    m_answer = 0;

    for (int iii = 0; iii < 3; iii++)
    {
            m_generatedNumbers[iii] = 0;
    }
}

void ProblemGenerator::generateProblem()
{
    resetVariables();
    EProblemVariation = (EProblemVariations)QRandomGenerator::global()->bounded(1, 5);

    // We know ppp must always be > 1, so ignore that case. Therefore,
    if ((EProblemVariation != ppp)) //&& (EProblemVariation != notSet))
    {
        do
        {
            resetVariables();

            // TODO: Determine if a smarter for loop is faster than generating & discarding until answer > 1. It'd get rid of do while loop too
            for (int iii = 0; iii <= 2; iii++)
                m_generatedNumbers[iii] = QRandomGenerator::global()->bounded(1,MAX_NUM_PER_VAR);

            if (EProblemVariation == ppm)
                m_answer = m_generatedNumbers[0] + m_generatedNumbers[1] - m_generatedNumbers[2];
            else if (EProblemVariation == pmp)
                m_answer = m_generatedNumbers[0] - m_generatedNumbers[1] + m_generatedNumbers[2];
            else if (EProblemVariation == pmm)
                m_answer = m_generatedNumbers[0] - m_generatedNumbers[1] - m_generatedNumbers[2];

        } while (m_answer < 1);
    }

    else // EProblemVariation = ppp
    {
        for (int iii = 0; iii <= 2; iii++)
        {
            m_generatedNumbers[iii] = QRandomGenerator::global()->bounded(1,MAX_NUM_PER_VAR);
            m_answer += m_generatedNumbers[iii];
        }
    }

#if 0
    do
    {
        resetVariables();

        for (int iii = 0; iii <= 2; iii++)
        {
            m_generatedNumbers[iii] = QRandomGenerator::global()->bounded(1,MAX_NUM_PER_VAR);
            m_answer += m_generatedNumbers[iii];
        }
    } while (m_answer < 1);
#endif // SAFE AND WORKING
}

























