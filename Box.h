#pragma once
#include "Container.h"

using namespace std;

class Box : public Container {
public:
    Box(Container* inner = nullptr);
    string inspect() const override;
};