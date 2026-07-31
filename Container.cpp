#include "Container.h"

using namespace std;

Container::Container() : name("Bare Object"), innerContainer(nullptr) {}

Container::Container(const string& name, Container* inner) 
    : name(name), innerContainer(inner) {}

string Container::getName() const {
    return name;// Returns container name
}

Container* Container::getInnerContainer() const {
    return innerContainer; // Returns inner pointer
}

string Container::inspect() const {
    return "a bare object"; // Base inspection string for the innermost object
}