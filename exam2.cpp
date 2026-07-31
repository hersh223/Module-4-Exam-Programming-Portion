#include <iostream>
#include <cstdlib>
#include <ctime>

// Problem 1 Includes
#include "Role.h"
#include "Developer.h"
#include "Manager.h"
#include "Employee.h"



using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    cout << "******** Problem 1: Employee Roles ********" << endl;
    
    Developer devRole;
    Manager mgrRole("Cybersecurity");

    Employee emp1("Herschel", &devRole);
    Employee emp2("Marcus", &mgrRole);

    emp1.work();
    emp2.work();











    return 0;


}