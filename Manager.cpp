#include "Manager.h"
#include <iostream>

using namespace std;

Manager::Manager(const string& dept) : Role("Manager"), department(dept) {}

string Manager::getDepartment() const {
    return department;
}

void Manager::setDepartment(const string& dept) {
    department = dept;
}

void Manager::performTask() {
    cout << ", the Manager, holds a status meeting for the " 
         << department << " department." << endl;
}