#pragma once 
#include <string>

using namespace std;


class Role{
    protected:

        string title;
        

    public:
    Role();
    Role(const string& title);
    virtual ~Role() = default;

    string getTitle() const;
    void setTitle(const string& title);

    virtual void performTask() = 0;
    
};

