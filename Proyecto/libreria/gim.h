#include <clientes.h>
#include <iostream>
#include <string>
#ifndef GIM_H
#define GIM_H

using namespace std;
typedef std::string str;


enum agrReserva  { ErrSinEspacio = -1,  ExitoAgregar = 1 };
enum inscripcion {Errinscripcion=-1, Exitoinscripcion=1};
enum rmReserva   {ErrDesinscribirse = -1, ExitoDesinscribirse = 1 };
enum verifico {ErrYaestaanotad=-1, ExitoNoestaanotado=1};

typedef enum verifico eVerifico;
typedef enum inscripcion eAgrinscripcion;
typedef enum agrReserva eAgreserva;

struct eClaseGIM{// agregar del tipo cliente y una cant de clientes del gim total, y una "actual" de clase
    eCliente* clientes;
    int cupo;
    int anotados;
    int horario;
    str nombreclase;
}; typedef struct eClaseGIM eClase;


//funcion disponibilidad
bool hayEspacio(eClase Clase);
//funcion reservar ID
eAgrinscripcion ReservaID(eCliente alumno, eClase* Clase, str nombreClase, int hora);
//funcion busca a todas las clases que esta inscripto un alumno por su id
eClase buscarXiD(eClase* clases, str id);
//funcion eliminar reserva
rmReserva desinscripcion(eClase* clases,str id);
//funcion verifica si el cliente no esta anotado en la clase ya
eVerifico repetido(eClase* clases, str id);



#endif // GIM_H
