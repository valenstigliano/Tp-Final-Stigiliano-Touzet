#ifndef GIM_H
#define GIM_H
#include <iostream>
#include <string>
typedef std::string str;
typedef struct sClase {
    unsigned int id;
    std::string nombre;
} sClase;
enum Clases { SPINNING, YOGA, PILATES, STRECHING, ZUMBA, BOXEO, NINGUNA };
const str Clases[7] = {"SPINNING", "YOGA", "PILATES", "STRECHING","ZUMBA", "BOXEO" };
typedef enum Clases eClase;
enum agrReserva  { ErrSinEspacio = -1,  ExitoAgregar = 1 };
enum rmReserva   {ErrDesinscribirse = -1, ExitoDesinscribirse = 1 };
enum srchCliente { ErrSrchValor = -2,   ErrSrchIndex = -1, ExitoBuscar = 1 };


struct Clase{
    char sala;
    int cupo_max;
    int horario;
    eClase tipo;
    int* dni;
}; typedef struct Clase clase;


//funcion disponibilidad
bool hayEspacio(Clase* clase );
//funcion agregar reserva
agrReserva inscripcion(clase* clases,horario* horarios);
//funcion eliminar reserva
rmReserva desinscripcion(clase* clases, horario* horarios,char dni);
//funcion guarda reserva
void ReservaDni(Cliente cliente, eClase clase, Horarios* reserva, int horario);
//funcion ordenar por apellido
void OrdenarPorApellido(horario* clase);


#endif // GIM_H
