#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H
#include <ctime>
using namespace std;
#endif // ESTRUCTURA_H
typedef struct{
    uint idCurso;
    time_t fechaInscripcion;
}Inscripcion;

typedef struct{
    uint idCliente, cantInscriptos;
    Inscripcion* CursosInscriptos;
}Asistencia;
