#include "Manager.h"
#include <iostream>

using namespace std;

// Initialize Manager role title and set target department
Manager::Manager(const string& dept) : Role("Manager"), department(dept) {}

string Manager::getDepartment() const {
    return department; // Return managed department name
}

void Manager::setDepartment(const string& dept) {
    department = dept; // Update managed department name
}

// Executes the manager's job function
void Manager::performTask() {
    cout << ", the Manager, holds a status meeting for the " 
         << department << " department." << endl;
}