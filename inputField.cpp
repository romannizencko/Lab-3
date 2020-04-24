#include "inputField.h"
#include <iostream>

using namespace std;
InputField :: InputField() : GraphicElement()
{
    this -> text = "UNKNOWN";
}
InputField :: InputField(string const &owner, unsigned int const sizeGraphicElement, string const &text) : GraphicElement(owner, sizeGraphicElement)
{
    this -> text = text;
}
InputField :: InputField(InputField const &inputField) : GraphicElement( inputField )
{
    this -> text = inputField.text;
}

void InputField :: setText(string const &text)
{
    this -> text = text;
}
const string& InputField :: getText() const
{
    return text;
}

void InputField :: print() const
{
    cout << "\nOwner: " << this -> owner << "\nSize: " << this -> sizeGraphicElement;
    cout << "\nHeader: " << this -> text;
}

InputField& InputField :: operator = (InputField const &inputField)
{
    this -> owner = inputField.owner;
    this -> sizeGraphicElement = inputField.sizeGraphicElement;
    this -> text = inputField.text;
    return *this;
}
