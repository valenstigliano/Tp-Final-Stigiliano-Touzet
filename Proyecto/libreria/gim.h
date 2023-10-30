#include <clientes.h>
#include iostream
#include string
#ifndef GIM_H
#define GIM_H

using namespace std;
typedef std::string str;


enum agrReserva  { ErrSinEspacio = -1,  ExitoAgregar = 1 };
enum rmReserva   {ErrDesinscribirse = -1, ExitoDesinscribirse = 1 };

typedef enum agrReserva eAgreserva;

struct eClaseGIM{// agregar del tipo cliente y una cant de clientes del gim total, y una "actual" de clase
    eCliente* clientes;
    int cant;
    int anotados;
    int horario;
    str nombreclase;
}; typedef struct eClaseGIM eClase;


//funcion disponibilidad
bool hayEspacio(cclase* Clase);//funcion agregar reserva
//funcion reservar ID

void ReservaID(eCliente alumno, cClase* Clase, string nombreClase, int hora);
//funcion eliminar reserva
rmReserva desinscripcion(cClase* clases,str id);
//funcion ordenar por apellido



#endif // GIM_H
