#include "Box.h"

using namespace std;

Box::Box(Container* inner) : Container("box", inner) {}

string Box::inspect() const {
    if (innerContainer) {
        return "a sturdy box holding " + innerContainer->inspect();
    }
    return "an empty sturdy box";
}