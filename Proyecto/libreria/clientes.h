#ifndef CLIENTES_H
#include "Gim.h"
#define CLIENTES_H
#define GIM_H

const Cliente ClienteNulo = { "", "", "", "", "","","",0,0,0};
enum agrCliente  { ErrAgregar = -1,  ExitoAgregar = 1 };
enum Cuota  { Nopago = -1,  pago = 1 };


typedef enum agrCliente  eAgrCliente;


struct cliente
{

    str id,Nombre, Apellido, Correo, Telefono,fechaNac;
    int estado;
    int categoria;//1. musculacion 2. clases
    int Cant;
    clase inscripciones;
};typedef struct cliente Cliente;

struct ListaCliente{
    Cliente* clientes;
    int Actual;
    int Tam;
    int categoria;//1: musculacion, 2: clases
}; typedef struct ListaCliente lcliente;

bool hayEspacioClientes(lcliente* misclientes );
eAgrCliente agregarCliente(lcliente* misclientes, Cliente cliente);
lcliente* resizeContactos(lcliente* misclientes, int tam, int nuevoTam);
void resizeContactos(lcliente** misclientes, int tam, int nuevoTam);
Cuota Chequeoestado(Cliente cliente);
#endif // CLIENTES_H
