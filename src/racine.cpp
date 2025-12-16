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

virtual double racine::calculRacineFonction()
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
          fNeg = calculeRacineFonction(neg);
          fPos = calculeRacineFonction(pos);
          fMilieu = calculeRacineFonction(milieu);

          if(fMilieu<=0)
            neg = milieu;
          else
            pos = milieu;
        }while(fMilieu >= 0.0+precisionZero || fMilieu <= 0.0-precisionZero)
    }

  results = milieu;
  
  return results;

}

double racine::calculZero2();