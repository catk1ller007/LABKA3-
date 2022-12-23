#include <iostream>
#include "Poliz.h"



int main()
{
    TPoliz poliz("(a+b^3-4)-(a+c)");


    cout << "(a+b^3-4)-(a+c)" << endl;
    cout << poliz.getPoliz() << endl;

    cout << "------------------------------" << endl;

    TPoliz Testik(poliz);
    cout << "Testik: " << Testik.getPoliz() << endl;

    cout << "--------------------------------" << endl;

    TPoliz poliz2("f*s+f*a");
    cout << "poliz2: " << poliz2.getPoliz() << endl;
    
    cout << "--------------------------------" << endl;

    poliz2 = poliz;
    cout << "poliz2: " << poliz2.getPoliz() << endl;
}

