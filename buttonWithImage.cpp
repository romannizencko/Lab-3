#include "buttonWithImage.h"
#include <iostream>

using namespace std;
ButtonWithImage :: ButtonWithImage() : Button()
{
    this -> image = "UNKNOWN";
}
ButtonWithImage :: ButtonWithImage(string const &owner, unsigned int const sizeGraphicElement, string const &title, string const &image) : Button(owner, sizeGraphicElement, title)
{
    this -> image = image;
}
ButtonWithImage :: ButtonWithImage(ButtonWithImage const &buttonWithImage) : Button( buttonWithImage )
{
    this -> image = buttonWithImage.image;
}

void ButtonWithImage :: setImage(string const &image)
{
    this -> image = image;
}
const string& ButtonWithImage :: getImage() const
{
    return image;
}

void ButtonWithImage :: print()
{
    Button :: print();
    cout << "\nImage: " << this -> image;
}

ButtonWithImage& ButtonWithImage :: operator = (ButtonWithImage const &buttonWithImage)
{
    Button:: operator = ( buttonWithImage );
    this -> image = buttonWithImage.image;
    return *this;
}
