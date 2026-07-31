#pragma once
#include "Container.h"

using namespace std;

class Box : public Container {
public:
    Box(Container* inner = nullptr); // Constructor taking inner item
    string inspect() const override; // Override inspect for box wrapping
};