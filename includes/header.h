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

    function<double(double)> fonctionInteg;

  public :
    integrationFonctions();
    integrationFonctions(std::string, double, double, double);

    std::string get_methode();

    double get_borneInf();
    double get_borneSup();
    double get_precisionInteg();

    function<double(double)> get_fonction();

    void set_methode(std::string);

    void set_borneInf(double);
    void set_borneSup(double);
    void set_precisionInteg(double);

    void set_fonction(function<double(double)>);

    double trapezeIntegration();
    double rectangleIntegration();
};

class valeurNulle
{
  protected :
    double precisionZero;

  public :
    valeurNulle();
    valeurNulle(double);

    double get_precisionZero();

    void set_precisionZero();

    virtual double calculFonction();

    double calculZero1();
    double calculZero2();
};

class magnetisation : public integrationFonctions, public valeurNulle
{
  private :
    double h;
    double g;
    double taille;
    double precision;
    double temperature;
    double magnetisation;
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
    double get_magnetisation();
    double get_magnetisationInter();

    void set_h(double);
    void set_g(double);
    void set_taille(double);
    void set_precision(double);
    void set_temperature(double);
    void set_magnetisation(double);
    void set_magnetisationInter(double);

    double calculTemperature();

};


#endif//HEADER_H