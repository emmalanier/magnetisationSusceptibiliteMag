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
#include <functional>
#include <string>

//CLASSES//

class integrationFonctions
{
  protected :
    std::string methode;
    
    double borneInf;
    double borneSup;
    double precisionInteg;

    std::function<double(double)> fonctionInteg;

  public :
    integrationFonctions();
    integrationFonctions(std::string, double, double, double);

    std::string get_methode();

    double get_borneInf();
    double get_borneSup();
    double get_precisionInteg();

    std::function<double(double)> get_fonction();

    void set_methode(std::string);

    void set_borneInf(double);
    void set_borneSup(double);
    void set_precisionInteg(double);

    void set_fonction(std::function<double(double)>);

    double trapezeIntegration();
    double rectangleIntegration();
};

class racine
{
  protected :
    double precisionZero;

  public :
    racine();
    racine(double);

    double get_precisionZero();

    void set_precisionZero(double);

    virtual double calculRacineFonction(double);

    double racineBissection();
    double calculZero2();
};

class magnetisation : public integrationFonctions, public racine
{
  private :
    double h;
    double g;
    double taille;
    double precision;
    double temperature;
    double magnetisationVal;
    double magnetisationInter;

  public :
    magnetisation();
    magnetisation(double, double, double, double, double);
    magnetisation(double, double, double, double, double, double, double);

    double get_h();
    double get_g();
    double get_taille();
    double get_precision();
    double get_temperature();
    double get_magnetisationVal();
    double get_magnetisationInter();

    void set_h(double);
    void set_g(double);
    void set_taille(double);
    void set_precision(double);
    void set_temperature(double);
    void set_magnetisationVal(double);
    void set_magnetisationInter(double);

    double calculInter(double);
    double calculRacineFonction(double);

};


#endif//HEADER_H