#pragma once
#include "Container.h"
#include <string>

using namespace std;

class WrappingPaper : public Container {
private:
    string pattern; // Decorative pattern style

public:
    WrappingPaper(const string& pattern = "festive", 
                  const string& name = "wrapping paper", 
                  Container* inner = nullptr);

    string inspect() const override; // Override inspect for paper wrap

};