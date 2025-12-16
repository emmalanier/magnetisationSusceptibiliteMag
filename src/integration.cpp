///////////////////////////////
//MAGNETISATION - INTEGRATION//
///////////////////////////////

#include "header.h"

//CONSTRUCTEURS//

integrationFonctions::integrationFonctions()
{
  methode = " ";
  borneInf = 0.0;
  borneSup = 0.0;
  precisionInteg = 0.0;
}

integrationFonctions::integrationFonctions(std::string m, double bI, double bS, double p)
{
  methode = m;
  borneInf = bI;
  borneSup = bS;
  precisionInteg = p;
}


//GETTEURS//
  
std::string integrationFonctions::get_methode()
{
  return methode;
}
  
double integrationFonctions::get_borneInf()
{
  return borneInf;
}
  
double integrationFonctions::get_borneSup()
{
  return borneSup;
}
  
double integrationFonctions::get_precisionInteg()
{
  return precisionInteg;
}
  
std::function<double(double)> integrationFonctions::get_fonction()
{
  return fonctionInteg;
}
  


//SETTEURS//

void integrationFonctions::set_methode(std::string s)
{
  methode = s;
}
  
void integrationFonctions::set_borneInf(double bI)
{
  borneInf = bI;
}
  
void integrationFonctions::set_borneSup(double bS)
{
  borneSup = bS;
}
  
void integrationFonctions::set_precisionInteg(double p)
{
  precisionInteg = p;
}
  
void integrationFonctions::set_fonction(std::function<double(double)> f)
{
  fonctionInteg = f;
}


//AUTRES METHODES PUBLIQUES//

double integrationFonctions::rectangleIntegration()
{
  //NOTE : precision stands for the number of iterations the algorithm will do. The higher the precision, the more
  //accurate the result, but the longer the run time. A lower precision will likely give less accurate results, but
  //the runtime will be shorter
  double size = borneSup - borneInf;
  double step = size/precisionInteg ;
  double results = 0.0;
  double a = borneInf;
  double functionEval = 0.0;
  double rectangleArea = 0.0;

  
  for(int i = 0; i<=step ; i++)
    {
      a+=step;
      functionEval = fonctionInteg(a);
      rectangleArea = functionEval*step;
      results+=rectangleArea;
    }

  return results;
}

double integrationFonctions::trapezeIntegration()
{
  //NOTE : precision stands for the number of iterations the algorithm will do. The higher the precision, the more
  //accurate the result, but the longer the run time. A lower precision will likely give less accurate results, but
  //the runtime will be shorter
  double size = borneSup - borneInf;
  double step = size/precisionInteg ;
  double results = 0.0;
  double a = borneInf;
  double functionEval1 = 0.0;
  double functionEval2 = 0.0;
  double area = 0.0;

  
  for(int i = 0; i<step ; i++)
    {
      a+=step;
      functionEval1 = fonctionInteg(a);
      functionEval2 = fonctionInteg(a+step);
      area = ((functionEval1 + functionEval2)*step)/2.0;
      results+=area;
    }

  return results;
}