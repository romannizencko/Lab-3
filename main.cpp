#include <iostream>
#include "graphicElement.h"
#include "window.h"
#include "button.h"
#include "buttonWithImage.h"
#include "inputField.h"
using namespace std;

int main()
{

    Button button;
    button.setTitle("knopka");
    Button button2(button);
    cout << "\nButton\n";
    button.print();
    cout << endl;
    button2.print();
    cout << endl;
    ButtonWithImage buttonWithImage( "Roman", 2020, "Laboratornaya3", "FivePlusPlus" );
    cout << "\nButtonWithImage\n";
    buttonWithImage.print();
    cout << endl;
    InputField inputField;
    cout << "\nInputField\n" << inputField.getOwner() << " " << inputField.getSizeGraphicElement() << " " << inputField.getText() << endl;
    Window window;
    Window window2("Roma", 2000, "Vechnyi_Speashyi");
    window = window2;
    cout << "\nWindow\n";
    window.print();

    return 0;
}
