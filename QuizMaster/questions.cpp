// questions.cpp
#include "questions.h"
#include <algorithm>
#include <random>
#include <ctime>
#include <iostream>
using namespace std;

// Function to load questions into a vector
vector<Question> loadQuestions() {
    vector<Question> questions = {
        // Initialize your questions here
        {"\nWhat is the capital of France?", {"  A. Paris", "  B. Rome", "  C. Berlin", "  D. Madrid"}, 'A'},
        
        {"\nWhat is the largest planet in our solar system?", {"  A. Mars", "  B. Earth", "  C. Jupiter", "  D. Saturn"}, 'C'},
        
        {"\nRennie Boy believes that everything that happens in this world has a cause or a reason. \nWhat scientific attitude is seen in his actions?", 
           {"  A. curiosity", "  B. firm set of beliefs", "  C. honesty", "  D. critical-mindedness"},'B'},
        
        {"\n_____ it never recycled any waste materials, the company's environmental record was not perfect.",
           {"  A. For", "  B. In that", "  C. With", "  D. Due to"}, 'B'},
        
        
        // Add more questions here
    };
    return questions;
}

// Function to shuffle the questions
void shuffleQuestions(vector<Question>& questions) {
    mt19937 rng(time(nullptr));
    shuffle(questions.begin(), questions.end(), rng);
}

// Function to display a question and check the answer
void displayAndCheckAnswer(const Question& question, int& totalCorrect) {
    cout << question.query << endl;
    for (const auto& option : question.options) {
        cout << option << endl;
    }
    cout << "\nEnter the letter of your answer: ";
    char answer;
    cin >> answer;
    if (toupper(answer) == question.correctAnswer) {
        cout << "\nYou are correct!" << endl;
        totalCorrect++; // Increment totalCorrect if the answer is correct
    } else {
        cout << "\nIncorrect. The correct answer was " << question.correctAnswer << "." << std::endl;
    }
}

void welcomeDisplay(){
    cout << "\n     ---------------------" << endl;
    cout << "          QUIZ MASTER" << endl;
    cout << "     ---------------------" << endl;
    cout << "      By: Marie Jun Ygot" << endl;
    cout << "\nWelcome to Quiz Master! Good Luck!" << endl;
    cout << endl;
}


