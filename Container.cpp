#include "Container.h"

using namespace std;

Container::Container() : name("Bare Object"), innerContainer(nullptr) {}

Container::Container(const string& name, Container* inner) 
    : name(name), innerContainer(inner) {}

string Container::getName() const {
    return name;
}

Container* Container::getInnerContainer() const {
    return innerContainer;
}

string Container::inspect() const {
    return "a bare object";
}