#pragma once 
#include <string>

using namespace std;


class Role{
    protected:

        string title; //specific job title associated with the role
        

    public:
    Role();
    Role(const string& title);
    virtual ~Role() = default;// virtual destructor for inheritance cleanup

    string getTitle() const;
    void setTitle(const string& title);

    virtual void performTask() = 0; //virtual function making Role an abstract class

};

