#pragma once
#include "Role.h"
#include <vector>
#include <string>

using namespace std;

class Developer : public Role{

    private:
        vector<string> languages;
        string selectLanguage();

     public:
        Developer();
        Developer(const vector<string>& languages);

        void writeCode(const string& language);
        void performTask() override;

    


};