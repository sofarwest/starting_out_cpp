#include "FinalExam.h"

// set function
// parameters are number of questions and number of questions missed
void FinalExam::set(int questions, int missed)
{
    double numericScore;

    // Set # of questions and # missed
    numQuestions = questions;
    numMissed = missed;

    // Calculate points for each question
    pointsEach = 100.0 / numQuestions;

    // Calculate the numeric score for exam
    numericScore = 100.0 - (missed * pointsEach);

    // Call inherited setScore function to set the numeric score
    setScore(numericScore);

    // Call the adjustScore function to adjust the score
    adjustScore();
}