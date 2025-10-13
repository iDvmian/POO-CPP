#ifndef PRUEBA_H
#define PRUEBA_H
#include <string>
using namespace std;



//Clases base
class Actividad
{
private:
    string nombre;
    double codigo;
    double duracionHoras;


public:
    

    virtual void mostrarinfo() const = 0;
    virtual double calcularNota() const = 0;


    //Destructor
    virtual ~Actividad(){}
};

class Evaluable{
    private:
    double peso;

    public:
    double calcularNotaBase(double notaObtenida) const;
};

class NoEvaluable{
    private:
    public:
    void mostarACtividad();



};

//Clases herencias multiples


class Claseteorica: Actividad, Evaluable{
    private:

    public:
    Claseteorica(){
        int duracion= 2;
        double peso=10;

    }


    Claseteorica(int d, double p){
        int duracion=d;
        double peso=p;

    }
};

class Laboratorio: Actividad, Evaluable{
    private:


    public:

    Laboratorio(){
        int duracion= 2;
        double peso=10;

    }


    Laboratorio(int d, double p){
        int duracion=d;
        double peso=p;

    }
};


class ProyectoInvertigacion: Actividad, Evaluable{
    private:

    public:
    ProyectoInvertigacion(){
        int duracion= 2;
        double peso=10;

    }


    ProyectoInvertigacion(int d, double p){
        int duracion=d;
        double peso=p;

    }


};

class Taller: Actividad, NoEvaluable{

};



#endif
