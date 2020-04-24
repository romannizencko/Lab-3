#include "graphicElement.h"

using namespace std;

GraphicElement :: GraphicElement()
{
    this -> owner = "UNKNOWN";
    this -> sizeGraphicElement = 0;
}
GraphicElement :: GraphicElement(string const &owner, unsigned int const sizeGraphicElement)
{
    this -> owner = owner;
    this -> sizeGraphicElement = sizeGraphicElement;
}

GraphicElement :: GraphicElement(const GraphicElement &GraphicElement)
{
    this -> owner = GraphicElement.owner;
    this -> sizeGraphicElement = GraphicElement.sizeGraphicElement;
}

void GraphicElement :: setOwner(string const &owner)
{
   this -> owner = owner;
}

const string& GraphicElement :: getOwner() const
{
    return owner;
}
void GraphicElement :: setSizeGraphicElement(unsigned int const sizeGraphicElement)
{
   this -> sizeGraphicElement = sizeGraphicElement;
}

const unsigned int GraphicElement :: getSizeGraphicElement() const
{
    return sizeGraphicElement;
}
