#include "gim.h"
#include "clientes.h"
//funcion hay espacio (tick)
//funcion chequeo estado (tick)
//funcion reserva(anadir el dni a la clase) (tick)
//verificar que exista la clase y horario
//verificar si no esta anotado 2 veces (tick)
/**

    @brief Función se fija si hay espacio en la clase
    @return Error :: agrReserva::ExitoAgregar, agrReserva::ErrSinEspacio;
*/

bool hayEspacio(eClase* Clase) {
    return (Clase->cupo - Clase->anotados >= 0);
}

/**
    @brief Función que almacena el dni para dejar un registro de reserva;
*/

eAgrinscripcion ReservaID(eCliente alumno, eClase* Clase, str nombreClase, int hora)
{
    if(alumno.Apellido != "")//me fijo que no sea cliente nulo
    {
        if(hayEspacio(Clase)&& Chequeoestado(alumno)==pago)//si hay espacion en la clase y si pago la cuota
        {

            if(Clase->nombreclase==nombreClase && Clase->horario==hora)//me fijo que la clase que quiera exista
            {
                 Clase->anotados++;//sumo uno a los anotados
                 Clase->clientes[Clase->anotados-1]=alumno;//copio en el ultimo anotado al alumno que se quiere inscribir
                return eAgrinscripcion::Exitoinscripcion; //retorna con exito si lo pudo anotar
            }

        }
    }
    if(alumno.Apellido=="")
    {
        return eAgrinscripcion::Errinscripcion;//retorna con error si el cliente es nulo
    }
}
/*
@brief Función buscar por el id en que clases esta inscripta una persona
*/
eClase buscarXiD(eClase* clases, str id)
{
    int i=0;

    int cont=0;
    for(int j=0;j<clases->cantClases;j++)
    {
        for(int i=0; i<clases->anotados;i++){
            if(clases[j].clientes[i].id==id)
            {
                cont++;
            }
        }

    }
    eClase aux[cont];

    if(id!=""){
    while(true){
        if(clases->clientes[i].id==id){
            aux[i]=clases[i];
        }
    }
    if(cont!=0){
           return aux[cont];
    }




}
}
/*
@brief Función verificar si el cliente no esta anotado en la clase ya
*/
eVerifico repetido(eClase* clases, str id){



   for(int j=0; j<clases->anotados;j++)
    {
        if(clases->clientes[j].id==id)
        {
            return eVerifico::ErrYaestaanotad;
           }else{
            return eVerifico::ExitoNoestaanotado;
           }

    }
}

spinig()
/*
@brief Función desinscribir
@return Error :: ErrDesinscribirse = -1, ExitoDesinscribirse = 1;
*/
/*rmReserva desinscripcion(clase* clases, str dni)
{
    if(horarios.cupo>0 && clases.horario==horarios.cupo)
    {
        for(int i=0; i< horarios.cupo; i++)
        {
            if(strcmp(horarios.dnis[i],dni)==0)
            {
                for (int j = i; j < horarios->cupo - 1; j++)
                {
                    strcpy(horarios->dnis[j], horarios->dnis[j + 1]);

                }
                horarios->cupo -= 1;
                return ExitoDesinscribirse;
            }

        }
    }else
    {
        return ErrDesinscribirse;
    }

}*/



