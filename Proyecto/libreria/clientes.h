using namespace std;
#ifndef CLIENTES_H
#define CLIENTES_H
#include <gim.h>
#include <string>
#include <iostream>
typedef std::string str;

/*enum agrCliente  { ErrAgregar = -1,  ExitoAgregar = 1 };*/
enum Cuota  { Nopago =-1,  pago =1 };

typedef enum Cuota cuota;
/*typedef enum agrCliente  eAgrCliente;*/


struct cliente
{
    string id,Nombre, Apellido, Correo, Telefono,fechaNac;
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
void agregarCliente(lcliente* misclientes, Cliente cliente);
lcliente* resizeContactos(lcliente* misclientes, int tam, int nuevoTam);
void resizeContactos(lcliente** misclientes, int tam, int nuevoTam);
Cuota Chequeoestado(Cliente cliente);
void OrdenarPorApellido(lcliente* grupo);
#endif // CLIENTES_H
