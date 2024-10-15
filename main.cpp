/*
* Name: Michael Maher
* Course: CS 250
* Last Update: 10/10/2024
* Program #2: OO Concepts
*/

#include <iostream>
#include "Athlete.h"
#include "Volleyball.h"
#include "Tennis.h"
using namespace std;


// Main provided by Dr.V. Also, information for the header, and Cpp file
int main()
{
    Athlete sport(72, 140, 'M');
    cout << "Athlete: " << sport.getHeight() << " "
         << sport.getWeight() << " "
         << sport.getGender() << endl;

    Tennis martina = Tennis();
    martina.setServeSpeed(100);
    martina.setGender('F');
    Tennis bjorn(150,false);
    bjorn.setGender('M');
    if  (martina.getGender() == 'F')
       cout << "Martina serve speed: " << martina.getServeSpeed() << endl;

    Volleyball kerri = Volleyball();
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    Volleyball giba("Outside Hitter",23.2);
    giba.setGender('M');
    if  (kerri.getGender() == 'F')
       cout << "Kerri is an " << kerri.getPosition() << endl;

    return 0;
}
