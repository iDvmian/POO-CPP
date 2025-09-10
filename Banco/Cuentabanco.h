#ifndef CUENTABANCO_H
#define CUENTABANCO_H
#include <iostream>




class Cuentabanco
{
private:
    std::string nombre;
    int cuenta;
    double saldo;
    double tasadeinteres;
public:

    //SETERS
    void setnombre(std:: string n);
    void setcuenta( int c);
    void setsaldo(double s);
    void settasa(double t);


    //GETERS
    std::string getnombre();
    int getcuenta();
    double getsaldo();
    double gettasa();


    //METODOS
    double deporistar( double a);
    double aplicarinteres();
    double retirardinero(double n);








};

#endif