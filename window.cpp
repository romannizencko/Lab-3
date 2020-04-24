#include "window.h"
#include <iostream>

using namespace std;
Window :: Window() : GraphicElement()
{
    this -> header = "UNKNOWN";
}
Window :: Window(string const &owner, unsigned int const sizeGraphicElement, string const &header) : GraphicElement(owner, sizeGraphicElement)
{
    this -> header = header;
}
Window :: Window(Window const &window) : GraphicElement( window )
{
    this -> header = window.header;
}

void Window :: setHeader(string const &header)
{
    this -> header = header;
}
const string& Window :: getHeader() const
{
    return header;
}

void Window :: print()
{
    cout << "\nOwner: " << this -> owner << "\nSize: " << this -> sizeGraphicElement;
    cout << "\nHeader: " << this -> header;
}

Window& Window :: operator = (Window const &window)
{
    this -> owner = window.owner;
    this -> sizeGraphicElement = window.sizeGraphicElement;
    this -> header = window.header;
    return *this;
}
