#include "Employee.h"
#include <iostream>

using namespace std;


Employee::Employee () : name(""), role(nullptr) {}

Employee::Employee(const string& name, Role* role) : name(name), role(role) {}

string Employee::getName() const {
    return name;
}

void Employee::setName(const string& name) {
    this->name = name;
}

Role* Employee::getRole() const {
    return role;
}

void Employee::setRole(Role* role) {
    this->role = role;
}

void Employee::work() {
    cout << name;
    if (role) {
        role->performTask();
    } else {
        cout << " has no assigned role." << endl;
    }
}