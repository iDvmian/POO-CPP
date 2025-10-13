#ifndef NUMERONATURALES_H
#define NUMERONATURALES_H

#include<string>
class NumerosNaturales{
    public:
        int valor;
    public:


        //seter n getter
        void setvalor(int n);
        int getvalor(); 


        int sumar(int n);
        int restar(int n);
        int multiplicar(int n);
        int dividir(int n);
        bool espar();
        bool esprimo();
        int collatz();

};

#endif