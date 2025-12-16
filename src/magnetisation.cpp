/////////////////////////////////
//MAGNETISATION - MAGNETISATION//
/////////////////////////////////

#include "header.h"

//CONSTRUCTEURS//

magnetisation::magnetisation()
{
  h = 0.0;
  g = 0.0;
  taille = 0.0;
  precision = 0.0;
  temperature = 0.0;
  magnetisationVal = 0.0;
  magnetisationInter = 0.0;
}

magnetisation::magnetisation(double h2, double g2, double t, double p, double temp)
{
  h = h2;
  g = g2;
  taille = t;
  precision = p;
  temperature = temp;
}

magnetisation::magnetisation(double h2, double g2, double t, double p, double temp, double mag, double magI)
{
  h = h2;
  g = g2;
  taille = t;
  precision = p;
  temperature = temp;
  magnetisationVal = mag;
  magnetisationInter = magI;
}


//GETTEURS//

double magnetisation::get_h()
{
  return h;
}

double magnetisation::get_g()
{
  return g;
}

double magnetisation::get_taille()
{
  return taille;
}

double magnetisation::get_precision()
{
  return precision;
}

double magnetisation::get_temperature()
{
  return temperature;
}

double magnetisation::get_magnetisationVal()
{
  return magnetisationVal;
}

double magnetisation::get_magnetisationInter()
{
  return magnetisationInter;
}

  
//SETTEURS//

void magnetisation::set_h(double h2)
{
  h = h2;
}

void magnetisation::set_g(double g2)
{
  g = g2;
}

void magnetisation::set_taille(double t)
{
  taille = t;
}

void magnetisation::set_precision(double p)
{
  precision = p;
}

void magnetisation::set_temperature(double temp)
{
  temperature = temp;
}

void magnetisation::set_magnetisationVal(double mag)
{
  magnetisationVal = mag;
}

void magnetisation::set_magnetisationInter(double magI)
{
  magnetisationInter = magI;
}
  

//AUTRES METHODES PUBLIQUES//

double magnetisation::calculInter(double k)
{
  double results;
  double k2 = k*k;
  double mag2 = magnetisationVal*magnetisationVal;
  double calculInter = sqrt(k2+mag2);

  results = (k2/(4.0*M_PI*M_PI))*(magnetisationVal/calculInter)*(tanh(calculInter/temperature));

  return results ;
}

double magnetisation::calculRacineFonction(double x)
{
  return x;
}