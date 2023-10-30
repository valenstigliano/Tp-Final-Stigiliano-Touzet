#include "Clientes.h"
#include "Gim.h"
//funcion que no haya 2 clases a la vez

bool hayEspacioClientes(lcliente* misclientes )
{
    return (misclientes->Tam - misclientes->Actual > 0);
}

void agregarCliente(lcliente* misclientes, cliente Cliente)
{
    if (misclientes->Actual>=misclientes->Tam) {
        resizeContactos(misclientes, misclientes->Actual, misclientes->Actual+1);
    }
    misclientes->clientes[misclientes->Actual- 1] = Cliente;
}
void resizeContactos(lcliente** misclientes, int tam, int nuevoTam)
{
    lcliente* aux = new lcliente[nuevoTam];

    if(aux == nullptr)
        return;

    int longitud = (tam < nuevoTam) ? tam: nuevoTam;

    for(u_int i = 0; i < longitud; i++)
        aux[i] = *misclientes[i];

    delete[] *misclientes;
    *misclientes = aux;
}


lcliente* resizeContactos(lcliente* misclientes, int tam, int nuevoTam)
{
    lcliente* aux = new lcliente[nuevoTam];

    int longitud = (tam <  nuevoTam) ? tam : nuevoTam;

    if(aux != nullptr) {

        for(u_int i = 0; i < longitud; i++)
            aux[i] = misclientes[i];

        delete[] misclientes;
        return aux;
    }

    return nullptr;
}
Cuota Chequeoestado(Cliente cliente){
    if(cliente.estado<0){
        return Cuota::Nopago;
    }else{
        return Cuota::pago;
    }



}

