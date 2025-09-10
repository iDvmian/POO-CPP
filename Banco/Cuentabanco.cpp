#include "Cuentabanco.h"

void Cuentabanco::setnombre(std::string n){
    nombre=n;
}

void Cuentabanco::setcuenta(int c){
    cuenta=c;
}

void Cuentabanco::setsaldo(double s){
    saldo=s;
}

void Cuentabanco::settasa(double t){
    tasadeinteres=t;
}



std::string Cuentabanco::getnombre(){
    return nombre;
}

int Cuentabanco::getcuenta(){
    return cuenta;
}

double Cuentabanco::getsaldo(){
    return saldo;
}

double Cuentabanco::gettasa(){
    return tasadeinteres;
}

double Cuentabanco::deporistar(double a){

    if(a>0){
        saldo=saldo+a;
        return saldo;
    }
    else{
    std::cout<< "deposito debe ser mayor a 0"<< std::endl;  
    return 0;
    }
}

double Cuentabanco::aplicarinteres(){
    double a=saldo*tasadeinteres/100;
    saldo=saldo+a;
    return saldo;
}

double Cuentabanco::retirardinero( double n){
    if (saldo>n)
    {
        saldo=saldo-n;
        return saldo;
    }

    else{
        std::cout << " saldo insufiente";
        return 0;
    }
    
}



int main(){
    Cuentabanco cuenta1;
    cuenta1.setnombre("Damian Rodriguez");
    cuenta1.setcuenta(001);
    cuenta1.setsaldo(30000);
    cuenta1.settasa(1.5);


    std::cout << "Titular " << cuenta1.getnombre() << std::endl;
    std::cout << "Numero de cuenta"<< cuenta1.getcuenta() << std::endl;
    std::cout << "Saldo $" << cuenta1.getsaldo() << std::endl;
    std::cout << "Tasa de interes " << cuenta1.gettasa() << std::endl;

    std::cout << "Cuenta mas el Deposito $"<< cuenta1.deporistar(10000) << std::endl;
    std::cout << "Calculo del saldo con tasa de interes es de $" << cuenta1.aplicarinteres() << std::endl;
    std::cout << "saldo Actual $" << cuenta1.retirardinero(15000) << std::endl;

    return 0;
}