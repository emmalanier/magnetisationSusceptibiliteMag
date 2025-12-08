//////////////////////////
//MAGNETSATION - METHODS//
//////////////////////////

#include "header.h"

double rectangleIntegration(const std::function<double(double)>& f, double integrationVariable, double precision, double highestPoint, double lowestPoint)
{
  //NOTE : precision stands for the number of iterations the algorithm will do. The higher the precision, the more
  //accurate the result, but the longer the run time. A lower precision will likely give less accurate results, but
  //the runtime will be shorter
  double size = highestPoint - lowestPoint;
  double step = size/precision ;
  double results = 0.0;
  double a = lowestPoint;
  double functionEval = 0.0;
  double rectangleArea = 0.0;

  
  for(int i = 0; i<=step ; i++)
    {
      a+=step;
      functionEval = f(a);
      rectangleArea = functionEval*step;
      results+=rectangleArea;
    }

  return results;
}

double trapezeIntegration(const std::function<double(double)>& f, double integrationVariable, double precision, double highestPoint, double lowestPoint)
{
  //NOTE : precision stands for the number of iterations the algorithm will do. The higher the precision, the more
  //accurate the result, but the longer the run time. A lower precision will likely give less accurate results, but
  //the runtime will be shorter
  double size = highestPoint - lowestPoint;
  double step = size/precision ;
  double results = 0.0;
  double a = lowestPoint;
  double functionEval1 = 0.0;
  double functionEval2 = 0.0;
  double area = 0.0;

  
  for(int i = 0; i<step ; i++)
    {
      a+=step;
      functionEval1 = f(a);
      functionEval2 = f(a+step);
      area = ((functionEval1 + functionEval2)*step)/2.0;
      results+=area;
    }

  return results;
}