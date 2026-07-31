#pragma once
#include "Role.h"
#include <string>

using namespace std;


class Employee{
    private:
        string name;
        Role* role;


    public:
        Employee();
        Employee(const string& name, Role* role);

        string getName() const;
        void setName(const string& name);
        
        Role* getRole() const;
        void setRole(Role* role);


        void work();

};