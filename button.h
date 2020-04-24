#pragma once
#include "graphicElement.h"
#include <string>

using namespace std;
class Button : public GraphicElement
{
protected:
    string title;
public:
    Button();
    Button(string const &owner, unsigned int const sizeGraphicElement, string const &title);
    Button(Button const &button);

    void setTitle(string const &title);
    const string& getTitle() const;

    void print() const;

    Button& operator = (Button const &button);
};
