#pragma once
#include "Button.h"
#include <string>

using namespace std;
class ButtonWithImage : public Button
{
protected:
    string image;
public:
    ButtonWithImage();
    ButtonWithImage(string const &owner, unsigned int const sizeGraphicElement, string const &title, string const &image);
    ButtonWithImage(ButtonWithImage const &buttonWithImage);

    void setImage(string const &title);
    const string& getImage() const;

    void print() const;

    ButtonWithImage& operator = (ButtonWithImage const &buttonWithImage);
};
