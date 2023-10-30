#include <clientes.h>
#include <iostream>
#include <string>
#ifndef GIM_H
#define GIM_H

using namespace std;
typedef std::string str;


enum agrReserva  { ErrSinEspacio = -1,  ExitoAgregar = 1 };
enum rmReserva   {ErrDesinscribirse = -1, ExitoDesinscribirse = 1 };

typedef enum agrReserva eAgreserva;

struct eClaseGIM{
    int cupo_max;
    int cupo;
    int horario;
    str nombreclase;
    str* id;
}; typedef struct eClaseGIM cClase;


//funcion disponibilidad
bool hayEspacio(cclase* Clase);//funcion agregar reserva
//funcion reservar ID

void ReservaID(eCliente alumno, cClase* Clase, string nombreClase, int hora);
//funcion eliminar reserva
rmReserva desinscripcion(cClase* clases,str id);
//funcion ordenar por apellido



#endif // GIM_H
