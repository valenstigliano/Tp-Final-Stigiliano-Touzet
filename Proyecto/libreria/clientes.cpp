#include "clientes.h"
#include "gim.h"
//funcion que no haya 2 clases a la vez

bool hayEspacioClientes(eCliente* misclientes )
{
    return (misclientes->tam_max - misclientes->actual > 0);
}
<<<<<<< Updated upstream

void agregarCliente(eCliente* clientes, eCliente clienteNuevo)
{
    if (clientes->actual>=clientes->tam_max) {
        resizeContactos(clientes, clientes->actual, clientes->actual+1);
    }
    clientes[clientes->actual- 1] = clienteNuevo;
}

void resizeContactos(eCliente** misclientes, int tam_max, int nuevoTam)
=======
void ResizeLista(lcliente** misclientes, int tam, int nuevoTam)
>>>>>>> Stashed changes
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

agrCliente agregarCliente(lcliente* misclientes, cliente Cliente)
{
    if (misclientes->Actual>=misclientes->Tam) {
        resizeContactos(misclientes, misclientes->Actual, misclientes->Actual+1);
    }
    misclientes->clientes[misclientes->Actual- 1] = Cliente;
    if(misclientes->Actual+1>misclientes->Tam){
        ResizeLista(misclientes, misclientes->Tam, misclientes->Tam+1);

\
    }
    misclientes->Actual+1;

    return ExAgregar;
}
/*    str id,Nombre, Apellido, Correo, Telefono,fechaNac;
    int estado;
    int categoria;//1. musculacion 2. clases
    int Cant;
    clase inscripciones;*/




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
<<<<<<< Updated upstream
}*/
=======
}
/**
    @brief Función chequeo estado de cuota
*/
Cuota Chequeoestado(Cliente cliente){
    if(cliente.estado<0){
        return Cuota::Nopago;
    }else{
        return Cuota::pago;
    }



}

>>>>>>> Stashed changes
