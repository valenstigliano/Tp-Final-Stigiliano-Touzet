#include <string>
#include <iostream>
#ifndef CLIENTES_H
#define CLIENTES_H

typedef std::string str;

/*enum agrCliente  { ErrAgregar = -1,  ExitoAgregar = 1 };*/
enum Cuota  { Nopago =-1,  pago =1 };

typedef enum Cuota cuota;
/*typedef enum agrCliente  eAgrCliente;*/


struct cliente
{
    str id,Nombre, Apellido, Correo, Telefono,fechaNac;
    int estado;//si pago o no
    int categoria;//1. musculacion 2. clases
    int actual;
    int tam_max;
};typedef struct cliente eCliente;

/*struct ListaCliente{
    eCliente* clientes;
    int Actual;
    int Tam;
}; typedef struct ListaCliente lcliente;
*/

bool hayEspacioClientes(eCliente* misclientes );
void agregarCliente(eCliente* clientes, eCliente clienteNuevo);
void resizeContactos(eCliente** misclientes, int tam_max, int nuevoTam);
eCliente* resizeContactos(eCliente* misclientes, int tam_max, int nuevoTam);
Cuota Chequeoestado(eCliente cliente);
void OrdenarPorApellido(eCliente* misclientes);
#endif // CLIENTES_H
