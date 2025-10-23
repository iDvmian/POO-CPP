#ifndef FICHA_H
#define FICHA_H

#include <string>
using namespace std;

class Ficha
{
private:
   int rut;
   string nombre;
   string apellido1;
   string apellido2;
   int edad;
   string diasgnosticoPrevio;
   string departamentoDerivado;
   string horario;
public:

Ficha(int a, string b, string c, string d , int e)
{
    rut = a;
    nombre = b;
    apellido1 = c;
    apellido2 = d;
    edad = e;
}


string getnombre();
bool validarRut();


};

















#endif