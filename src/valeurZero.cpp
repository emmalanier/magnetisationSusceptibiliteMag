///////////////////////////////
//MAGNETISATION - VALEUR ZERO//
///////////////////////////////

#include "header.h"

//CONSTRUCTEURS//

valeurZero::valeurNulle()
{
  precisionZero = 0.0;
}

valeurZero::valeurNulle(double p)
{
  precisionZero = p ;
}


//GETTEURS//

double valeurZero::get_precisionZero()
{
  return precisionZero;
}

  
//SETTEURS//

void valeurZero::set_precisionZero(double p)
{
  precisionZero = p;
}

  
//AUTRES METHODES PUBLIQUES//

virtual double valeurZero::calculFonction();
  
double valeurZero::calculZero1();
double valeurZero::calculZero2();