///////////////////////////////
//MAGNETISATION - VALEUR ZERO//
///////////////////////////////

#include "header.h"

//CONSTRUCTEURS//

racine::racine()
{
  precisionZero = 0.0;
}

racine::racine(double p)
{
  precisionZero = p ;
}


//GETTEURS//

double racine::get_precisionZero()
{
  return precisionZero;
}

  
//SETTEURS//

void racine::set_precisionZero(double p)
{
  precisionZero = p;
}

  
//AUTRES METHODES PUBLIQUES//

double racine::calculRacineFonction(double d)
{
  return 0.0;
}
  
double racine::racineBissection()
{
  double results;
  double pos;
  double neg;
  double milieu;
  double fPos;
  double fNeg;
  double fMilieu;
  
  while(fPos>=0 && fNeg<=0)
    {
      do
        {
          milieu = (neg+pos)/2.0;
          fNeg = calculRacineFonction(neg);
          fPos = calculRacineFonction(pos);
          fMilieu = calculRacineFonction(milieu);

          if(fMilieu<=0)
            neg = milieu;
          else
            pos = milieu;
        }while(fMilieu >= 0.0+precisionZero || fMilieu <= 0.0-precisionZero);
    }

  results = milieu;
  
  return results;

}

double racine::calculZero2()
{
  return 0.0;
}