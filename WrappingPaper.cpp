#include "WrappingPaper.h"

using namespace std;


WrappingPaper::WrappingPaper(const string& pattern, const string& name, Container* inner)
    : Container(name, inner), pattern(pattern) {} // Init paper pattern and base properties


// Recursively inspect wrapped item
string WrappingPaper::inspect() const {
    if (innerContainer) {
        return "decorative " + pattern + " paper wrapped around " + innerContainer->inspect(); // Recursive string building
    }
    return "decorative " + pattern + " paper";
}