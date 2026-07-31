#include "Developer.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Developer::Developer() : Role("Developer"), languages{"C++", "Python", "Java", "JavaScript"} {}

Developer::Developer(const vector<string>& langs) // Constructor accepting a custom list of languages
    : Role("Developer"), languages(langs) {}

// Randomly selects a language from the available languages 
string Developer::selectLanguage() {
    if (languages.empty()) return "C++";
    int index = rand() % languages.size();
    return languages[index];
}
// Prints language activity of developer
void Developer::writeCode(const string& language) {
    cout << "writes code in " << language << ".";
}

void Developer::performTask() { // Executes the developer's primary job
    string lang = selectLanguage();
    cout << ", the Developer, ";
    writeCode(lang);
    cout << endl;
}