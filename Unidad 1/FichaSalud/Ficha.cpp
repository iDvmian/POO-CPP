/*
● El hospital INFUCM necesita automatizar su sistema de ficha de
pacientes utilizada cada vez que el médico general entrega un
diagnóstico preliminar y deriva al cliente a otro departamento de mayor
especialidad.
● El usuario del software es el médico, cree el programa en torno a esto.
● La ficha médica debe estar compuesta por un rut, nombre, apellido 1,
apellido 2, edad, diagnóstico previo, departamento derivado y horario
seleccionado por el paciente.
● Cada vez que un paciente es ingresado, el sistema debe validar su rut.
● Cada paciente puede ser ingresado de dos maneras: por archivo y por
teclado. Toda la información requerida debe ser ingresada.
Ejercicio: Ficha de Salud (parte 2)
● En el caso donde más de una ficha cumpla con el o los filtros
establecidos, el sistema deberá mostrar todas las fichas que cumplan.
● El hospital posee distintos departamentos, cada uno de ellos tiene la
disponibilidad horaria, por ahora trabaje con un “.txt”.
● El sistema debe permitir consultar las fichas de los pacientes según
distintos criterios: por rut, por edad, por nombre, entre otros.
● El sistema debe permitir consultar los horarios disponibles por
departamento, con el fin de facilitarle el proceso de selección de
horario al médico y paciente. Puede utilizar 3 departamentos:
Imagenología, Cardiología y Hematología.
● El sistema debe permitir consultar el promedio de las edades de los
pacientes registrados por departamento.*/

/*Ejercicio: Ficha de Salud (parte 2)
● En el caso donde más de una ficha cumpla con el o los filtros
establecidos, el sistema deberá mostrar todas las fichas que cumplan.
● El hospital posee distintos departamentos, cada uno de ellos tiene la
disponibilidad horaria, por ahora trabaje con un “.txt”.
● El sistema debe permitir consultar las fichas de los pacientes según
distintos criterios: por rut, por edad, por nombre, entre otros.
● El sistema debe permitir consultar los horarios disponibles por
departamento, con el fin de facilitarle el proceso de selección de
horario al médico y paciente. Puede utilizar 3 departamentos:
Imagenología, Cardiología y Hematología.
● El sistema debe permitir consultar el promedio de las edades de los
pacientes registrados por departamento.*/

#include <iostream>
#include "Ficha.h"
using namespace std;


string Ficha::getnombre(){
    return nombre;
}


int main()
{
    Ficha Persona1(12,"Damian","Rodriguez","Encina", 12);
    cout<< Persona1.getnombre();
    



    return 0;
}
