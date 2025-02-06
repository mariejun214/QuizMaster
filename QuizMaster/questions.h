// questions.h
#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <vector>
#include <string>

using namespace std;

// Define a structure to hold each question and its answer
struct Question {
    string query;
    vector<string> options;
    char correctAnswer;
   
};

// Function prototypes
vector<Question> loadQuestions();
void shuffleQuestions(vector<Question>& questions);

void welcomeDisplay();
void displayAndCheckAnswer(const Question& question, int& totalCorrect);
//double calculateAverageScore(const vector<bool>& answers);

#endif // QUESTIONS_H
