#pragma once
#include "Role.h"
#include <string>

using namespace std;

class Manager : public Role {
private:
    string department; // The specific department managed

public:
    Manager(const string& dept = "Engineering"); // Constructor setting department

    string getDepartment() const;
    void setDepartment(const string& dept);

    void performTask() override; // Override base performTask to handle Manager workflow
};