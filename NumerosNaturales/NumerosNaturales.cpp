#include "NumerosNaturales.h"
#include <iostream>

void NumerosNaturales::setvalor(int n){
    valor = n;
}

int NumerosNaturales::getvalor(){
return valor;
}

int NumerosNaturales::sumar(int n){
    return valor + n;
}

int NumerosNaturales::restar(int n){
    return valor - n;
}

int NumerosNaturales::multiplicar(int n){
    return valor * n;

}

int NumerosNaturales::dividir( int n){
    return valor / n;
}

bool NumerosNaturales::espar(){
    if (valor % 2==0){
        return 1;
    }

    else {
    return  0;
    }
}


bool NumerosNaturales::esprimo() {
    int auxi=valor;
    if (auxi <= 1) return false;
    for (int i = 2; i * i <= auxi; i++) {
        if (auxi % i == 0) return false;
    }
    return true;
}


int NumerosNaturales::collatz() {
    int pasos = 0;
    int auxi=valor;

    while (auxi != 1) {
        if (auxi % 2 == 0) {
            auxi /= 2;      // Si es par
        } else {
            auxi = 3 * auxi + 1;  // Si es impar
        }
        std::cout << auxi << std::endl;
    }

    return 0;
}


int main(){
    NumerosNaturales numero1;

    numero1.setvalor(325);
    std::cout <<"el numero asignado es "<< numero1.getvalor() <<std::endl;

    std::cout << "La suma es: " << numero1.sumar(10) << std::endl;

    std::cout << "La resta es: "<< numero1.restar(5) << std::endl;

    std::cout << "La multilicaion es " <<numero1.multiplicar(2) << std::endl;

    std::cout << "La divicion es " << numero1.dividir(2) << std::endl;

    std::cout << "El numero " << numero1.getvalor() << (numero1.espar() ? " es par":" es impar") << std::endl;

    std::cout << "El numero " << numero1.getvalor() << (numero1.esprimo() ? " es primo":" no es primo") << std::endl;

    std::cout << "El numero " << numero1.getvalor() << " en collatz " << std::endl << numero1.collatz() <<std::endl;

}
