#include "clientes.h"
#include "gim.h"
//funcion que no haya 2 clases a la vez

bool hayEspacioClientes(eCliente* misclientes )
{
    return (misclientes->tam_max - misclientes->actual > 0);
}

void agregarCliente(eCliente* clientes, eCliente clienteNuevo)
{
    if (clientes->actual>=clientes->tam_max) {
        resizeContactos(clientes, clientes->actual, clientes->actual+1);
    }
    clientes[clientes->actual- 1] = clienteNuevo;
}

void resizeContactos(eCliente** misclientes, int tam_max, int nuevoTam)
{

    eCliente** aux = new eCliente*[nuevoTam];

    if(aux == nullptr)
        return;

    int longitud = (tam_max < nuevoTam) ? tam_max: nuevoTam;

    for(int i = 0; i < longitud; i++)
        aux[i] = misclientes[i];

    for (int i = 0; i < tam_max; i++) {
        delete misclientes[i];
    }
    delete[] *misclientes;

    // Actualizar el puntero misclientes
    *misclientes = *aux;
}



Cuota Chequeoestado(eCliente cliente){
    if(cliente.estado<0){
        return Cuota::Nopago;
    }else{
        return Cuota::pago;
    }
}
void OrdenarPorApellido(eCliente* misclientes)
{
    eCliente aux;
    int cont;
    for(int i = 0; i < misclientes->actual - 1; i++)
    { cont=0;
        for(int j = 0; j < misclientes->actual-1; j++)
        {
            if(misclientes[j].Apellido[0]<=misclientes[j+1].Apellido[0])
            {
                aux=misclientes[j];
                misclientes[j]=misclientes[j+1];
                misclientes[j+1]=aux;
                cont++;
            }
            if(cont==0)
                break;
        }
    }
}
/*lcliente* resizeContactos(lcliente* misclientes, int tam, int nuevoTam)
{
    lcliente* aux = new lcliente[nuevoTam];

    int longitud = (tam <  nuevoTam) ? tam : nuevoTam;

    if(aux != nullptr) {

        for(int i = 0; i < longitud; i++)
            aux[i] = misclientes[i];

        delete[] misclientes;
        return aux;
    }

    return nullptr;
}*/
