#pragma once
#include <string>

using namespace std;
class GraphicElement
{
protected:
    string owner;
    unsigned int sizeGraphicElement;
public:
    GraphicElement();
    GraphicElement(string const &owner, unsigned int const sizeGraphicElement);
    GraphicElement(GraphicElement const &graphicElement);
    virtual void print() = 0;
    void setOwner(string const &owner);
    void setSizeGraphicElement(unsigned int const sizeGraphicElement);
    const string& getOwner() const;
    const unsigned int getSizeGraphicElement() const;
};
