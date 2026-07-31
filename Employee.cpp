#include "Employee.h"
#include <iostream>

using namespace std;


Employee::Employee () : name(""), role(nullptr) {}// Default state

Employee::Employee(const string& name, Role* role) : name(name), role(role) {}

string Employee::getName() const {
    return name;
}

void Employee::setName(const string& name) {
    this->name = name; // Set employee name
}

Role* Employee::getRole() const {
    return role;
}

void Employee::setRole(Role* role) {
    this->role = role; // Set role pointer
}

// Delegate work to the assigned role via dynamic dispatch
void Employee::work() { 
    cout << name;
    if (role) {
        role->performTask(); // Polymorphic function call
    } else {
        cout << " has no assigned role." << endl;
    }
}