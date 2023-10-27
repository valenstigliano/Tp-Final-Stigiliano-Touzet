#ifndef GIM_H
#define GIM_H
#include <iostream>
#include <string>
typedef std::string str;
enum agrReserva  { ErrSinEspacio = -1,  ExitoAgregar = 1 };
enum rmReserva   {ErrDesinscribirse = -1, ExitoDesinscribirse = 1 };
enum srchCliente { ErrSrchValor = -2,   ErrSrchIndex = -1, ExitoBuscar = 1 };


struct Clase{

    int cupo_max;
    int cupo;
    int horario;
    str nombreclase;
    str* id;;
}; typedef struct Clase clase;


//funcion disponibilidad
bool hayEspacio(clase* Clase);//funcion agregar reserva
//funcion reservar ID
void ReservaID(Cliente alumno,clase* Clase,str nombreClase,int hora);
//funcion eliminar reserva
/*rmReserva desinscripcion(clase* clases, horario* horarios,char dni);*/
//funcion ordenar por apellido
void OrdenarPorApellido(lcliente* grupo);


#endif // GIM_H
