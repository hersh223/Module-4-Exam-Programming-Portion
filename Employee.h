#pragma once
#include "Role.h"
#include <string>

using namespace std;


class Employee{
    private:
        string name;
        Role* role; // Pointer to generic Role object


    public:
        Employee();
        Employee(const string& name, Role* role); // Init name and role pointer

        string getName() const;
        void setName(const string& name);
        
        Role* getRole() const; 
        void setRole(Role* role);


        void work(); // Executes assigned role task
};

