#pragma once
#include <string>

using namespace std;

class Container {
protected:
    string name;  // Label or name of the container
    Container* innerContainer; // Pointer to nested inner container

public:
    Container();
    Container(const string& name, Container* inner = nullptr); // Constructor setting container name and nested inner container pointer
    virtual ~Container() = default; // Virtual destructor for cleanup

    string getName() const;
    Container* getInnerContainer() const;

    virtual string inspect() const; // Recursive inspection method
};