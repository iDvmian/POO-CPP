//Damian Rodriguez Encina & Fernando Verdugo Rojas
//Clase Personas

#include "Persona.h"
#include <iostream>
using namespace std;


void Persona::setNombre(string a){
    nombre=a;
}
void Persona::setTelefono(string b){
    telefono=b;
}
void Persona::setContrasena( string  c){
    contrasena=c;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getTlefono(){
    return telefono;
}

string  Persona::getContrasena(){
    return contrasena;
}


void Persona::mostrarDatos(){
    cout << "Su nombre es: "<< nombre << " y su telefono es: "<<telefono<< endl;
}

void Persona::cambiarContrasena(string  nuevaContrasena){
        contrasena=nuevaContrasena;
        //cout << contrasena;

}

void Persona::obtenerContrasenaCodificada(){
}

bool Persona::verificarContrasena(string  intento){
    if (contrasena==intento){
        cout << "CORRECTA";
        return true;
    }

    else{
        cout << "INCORRECTA";
        return false;
    }
}

int main(){
    Persona persona1;
    string  contrasena;
    string nuevaContrasena;


    persona1.setNombre("Damian Rodriguez");
    persona1.setTelefono("+56947157978");
    persona1.setContrasena("ggwp123");
    cout << "--------Datos de Cliente-------------------" << endl;
    persona1.mostrarDatos();


    cout << "Ingrese nueva contrasena: "<< endl;
    cin >> nuevaContrasena;
    persona1.cambiarContrasena(nuevaContrasena);
    persona1.getContrasena();

    cout << "Ingrese contrsena a verificar: "<< endl;
    cin >> contrasena;

    persona1.verificarContrasena(contrasena);
    return 0;
}