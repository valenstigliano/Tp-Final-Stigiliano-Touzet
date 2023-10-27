#include "Clientes.h"
#include "Gim.h"

bool hayEspacioClientes(lcliente* misclientes )
{
    return (misclientes.Tam- misclientes->Actual > 0);
}

eAgrCliente agregarCliente(lcliente* misclientes, Cliente cliente)
{
    if (misclientes.Actual>=misclientes.Tam) {
        resizeContactos(misclientes, misclientes.Actual, misclientes.Actual+1);
    }
    misclientes[misclientes->Actual- 1] = cliente;
    return eAgrCliente::ExitoAgregar;
}
void resizeContactos(lclientes** misclientes, int tam, int nuevoTam)
{
    lclientes* aux = new lcliente[nuevoTam];

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


