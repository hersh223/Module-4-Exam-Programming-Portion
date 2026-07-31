#include "Role.h"

using namespace std;

Role::Role() : title(""){};

Role::Role(const string&title) : title(title){}


string Role::getTitle() const {
    return title;
}

void Role::setTitle(const string& title){
    this -> title = title;
}
