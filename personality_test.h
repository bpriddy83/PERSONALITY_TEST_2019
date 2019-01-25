#ifndef _PERSONALITY_TEST_H
#define _PERSONALITY_TEST_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

// personality test class
class personality_test {
    public:
        bool load(istream&);
        void printout();
        void run_test();
        string analyze_personality();
        void categorize_output(string);
        void save_output(string);
        // Add anything you may need
        bool isStringInt(string nextWord);
        
    private:
    string _nextLine;
    string _nextStringChecked;
    int _numberOfQuestionsInFile;
    vector<Questions> storingQuestions;
    int _currentQuestionCategory;
    vector<vector<string>> allLines;
    vector<string> tempString;
    vector<string> yesAnswer;
    vector<string> noAnswer;
    vector<string> categories;
    vector<char> chosenAnswer;

        // Add anything you may need
};

class Questions {
public:
    char yesAnswer;
    char noAnswer;
    string question;
    int category;
};

#endif
