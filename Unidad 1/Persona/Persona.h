//Damian Rodriguez Encina & Fernando Verdugo Rojas
//Clase Personas

#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;


class Persona
{
    private:
    string nombre;
    string telefono;
    string contrasena;
    public:

    //seters
    void setNombre(string a);
    void setTelefono(string b);
    void setContrasena(string  c);


    // getters
    string getTlefono();
    string getNombre();
    string  getContrasena();

    //metodos
    void mostrarDatos();
    void cambiarContrasena(string  nuevaContrasena);
    void obtenerContrasenaCodificada();
    bool verificarContrasena(string intento);




};
#endif