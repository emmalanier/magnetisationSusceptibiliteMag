/////////////////////////
//MAGETISATION - HEADER//
/////////////////////////

#ifndef HEADER_H
#define HEADER_H

//INCLUDES//
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

//CLASSES//

class magnetisation : public//classe d'integ
{
  private :
    double h;
    double g;
    double taille;
    double magnetisation;
    double magnetisationInter;

  public :
    magnetisation();
    magnetisation(double, double, double);
    magnetisation(double, double, double, double, double);

};


#endif//HEADER_H