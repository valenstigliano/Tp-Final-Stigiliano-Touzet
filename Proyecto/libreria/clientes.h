#ifndef CLIENTES_H
#include "Gim.h"
#define CLIENTES_H
#define GIM_H

const sCliente ClienteNulo = { "", "", "", "", "", {0},{0},{0}, eClase::NINGUNA };
enum agrCliente  { ErrAgregar = -1,  ExitoAgregar = 1 };

typedef enum agrCliente  eAgrCliente;


struct cliente
{

    str id,Nombre, Apellido, Correo, Telefono,fechaNac, estado;
    int categoria;//1. musculacion 2. clases
    int Cant;
    clase inscripciones;
};typedef struct cliente Cliente;

struct ListaCliente{
    Cliente* clientes;
    int Actual;
    int Tam;
    int categoria;//1: musculacion, 2: clases
}; typedef struct ListaClientes lcliente;

bool hayEspacioClientes(lcliente* misclientes );
eAgrCliente agregarCliente(lcliente* misclientes, Cliente cliente);
lcliente* resizeContactos(lcliente* misclientes, int tam, int nuevoTam);
void resizeContactos(lclientes** misclientes, int tam, int nuevoTam);
#endif // CLIENTES_H
