#include "Developer.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Developer::Developer() : Role("Developer"), languages{"C++", "Python", "Java", "JavaScript"} {}

Developer::Developer(const vector<string>& langs) 
    : Role("Developer"), languages(langs) {}

string Developer::selectLanguage() {
    if (languages.empty()) return "C++";
    int index = rand() % languages.size();
    return languages[index];
}

void Developer::writeCode(const string& language) {
    cout << "writes code in " << language << ".";
}

void Developer::performTask() {
    string lang = selectLanguage();
    cout << ", the Developer, ";
    writeCode(lang);
    cout << endl;
}