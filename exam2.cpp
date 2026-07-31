#include <iostream>
#include <cstdlib>
#include <ctime>

// Problem 1 Includes
#include "Role.h"
#include "Developer.h"
#include "Manager.h"
#include "Employee.h"

// Problem 2 Includes
#include "Container.h"
#include "Box.h"
#include "WrappingPaper.h"

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed random number generator for dynamic language picking in Developer

    cout << "*** Problem 1: Employee Roles ***" << endl;
    
    // Create concrete role instances on the stack
    Developer devRole;
    Manager mgrRole("Cybersecurity");

    // Pass role addresses to Employee instances
    Employee emp1("Herschel", &devRole);
    Employee emp2("Marcus", &mgrRole);

    emp1.work();
    emp2.work();

cout << "\n*** Problem 2: Nested Containers Demonstration ***" << endl;

    // Container 1: "Bare Object" -> WrappingPaper -> Box
    Container* bareObj1 = new Container();
    Container* paper1 = new WrappingPaper("festive", "wrapping paper", bareObj1);
    Container* box1 = new Box(paper1);

    cout << "Item 1 Inspection: " << box1->inspect() << endl;

    // Container 2: "Bare Object" -> WrappingPaper -> Box -> WrappingPaper -> Box
    Container* bareObj2 = new Container();
    Container* paper2_inner = new WrappingPaper("holiday", "wrapping paper", bareObj2);
    Container* box2_inner = new Box(paper2_inner);
    Container* paper2_outer = new WrappingPaper("birthday", "wrapping paper", box2_inner);
    Container* box2_outer = new Box(paper2_outer);

    cout << "Item 2 Inspection: " << box2_outer->inspect() << endl;

    // Memory Cleanup
    delete box1;
    delete paper1;
    delete bareObj1;

    delete box2_outer;
    delete paper2_outer;
    delete box2_inner;
    delete paper2_inner;
    delete bareObj2;

    return 0;
}









   