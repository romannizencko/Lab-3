#include "button.h"
#include <iostream>

using namespace std;
Button :: Button() : GraphicElement()
{
    this -> title = "UNKNOWN";
}
Button :: Button(string const &owner, unsigned int const sizeGraphicElement, string const &title) : GraphicElement(owner, sizeGraphicElement)
{
    this -> title = title;
}
Button :: Button(Button const &Button) : GraphicElement( Button )
{
    this -> title = Button.title;
}

void Button :: setTitle(string const &title)
{
    this -> title = title;
}
const string& Button :: getTitle() const
{
    return title;
}

void Button :: print()
{
    cout << "\nOwner: " << this -> owner << "\nSize: " << this -> sizeGraphicElement;
    cout << "\nTitle: " << this -> title;
}

Button& Button :: operator = (Button const &button)
{
    this -> owner = button.owner;
    this -> sizeGraphicElement = button.sizeGraphicElement;
    this -> title = button.title;
    return *this;
}
