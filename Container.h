#pragma once
#include <string>

using namespace std;

class Container {
protected:
    string name;
    Container* innerContainer;

public:
    Container();
    Container(const string& name, Container* inner = nullptr);
    virtual ~Container() = default;

    string getName() const;
    Container* getInnerContainer() const;

    virtual string inspect() const;
};