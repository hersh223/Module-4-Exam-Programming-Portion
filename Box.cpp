#include "Box.h"

using namespace std;

Box::Box(Container* inner) : Container("box", inner) {}

// Recursively inspect inner container if present
string Box::inspect() const {
    if (innerContainer) {
        return "a sturdy box holding " + innerContainer->inspect(); // Append inner contents
    }
    return "an empty sturdy box";
}