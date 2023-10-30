#ifndef GIM_H
#define GIM_H
#include <clientes.h>
#include <iostream>
#include <string>
using namespace std;
typedef std::string str;


enum agrReserva  { ErrSinEspacio = -1,  ExitoAgregar = 1 };
enum rmReserva   {ErrDesinscribirse = -1, ExitoDesinscribirse = 1 };

typedef enum agrReserva eAgreserva;

struct Clase{
    int cupo_max;
    int cupo;
    int horario;
    string nombreclase;
    string* id;
}; typedef struct Clase clase;


//funcion disponibilidad
bool hayEspacio(clase* Clase);//funcion agregar reserva
//funcion reservar ID

void ReservaID(Cliente alumno, clase* Clase, string nombreClase, int hora);
//funcion eliminar reserva
rmReserva desinscripcion(clase* clases,char dni);
//funcion ordenar por apellido



#endif // GIM_H
