/*By: Marie Jun Ygot (Date Begin:03-31-24 Date Finished:______)*/
#include "questions.h"
#include <iostream>
#include <limits>
using namespace std;

int main() {
    
    welcomeDisplay();
    
    cout << "Press Enter to begin...";
    cin.get(); // Wait for user to press Enter
    system("clear");
    
    vector<Question> questions = loadQuestions(); // Load questions from questions.cpp
    shuffleQuestions(questions); // Shuffle the questions

    // Loop through each question and display it
    int counter = 0;
    int totalCorrect = 0; // Initialize totalCorrect to 0
    for (const auto& question : questions) {
        
        displayAndCheckAnswer(question, totalCorrect); // Pass totalCorrect by reference
        cout << "\nPress Enter to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
        cin.get(); // Wait for user to press Enter
        counter++; // Increment counter for each question answered
        system("clear");
    }
   
    cout << "\nNumber of questions answered: " << counter << endl;
    cout << "Total number of correct answers: " << totalCorrect << endl;
    
    double averagePercentage = (static_cast<double>(totalCorrect) / counter) * 100.0;
    cout << "Average Score: " << averagePercentage << "%" << endl;   
    
    if (averagePercentage >= 75){
        cout << "Congratulations! You passed the exam!" << endl;
    }else{
        cout << "You failed the exam! Better luck next time." << endl;
    }
    
    
    return 0;
}
