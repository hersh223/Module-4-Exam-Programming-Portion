#pragma once
#include "Role.h"
#include <vector>
#include <string>

using namespace std;

// Derived class representing a Developer role
class Developer : public Role{

    private:
        vector<string> languages; // List of programming languages available to the developer
        string selectLanguage();

     public:
        Developer();
        Developer(const vector<string>& languages); // custom language list constructor
        void writeCode(const string& language);// Output specific for coding activity
        void performTask() override; // Override base performTask to handle Developer workflow

    


};