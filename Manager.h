#pragma once
#include "Role.h"
#include <string>

using namespace std;

class Manager : public Role {
private:
    string department;

public:
    Manager(const string& dept = "Engineering");

    string getDepartment() const;
    void setDepartment(const string& dept);

    void performTask() override;
};