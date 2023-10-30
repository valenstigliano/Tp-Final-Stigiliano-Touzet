#include "gim.h"
#include "clientes.h"
//funcion hay espacio (tick)
//funcion chequeo estado (tick)
//funcion reserva(anadir el dni a la clase) (tick)
//verificar que exista la clase y horario
//verificar si no esta anotado 2 veces
/**

    @brief Función se fija si hay espacio en la clase
    @return Error :: agrReserva::ExitoAgregar, agrReserva::ErrSinEspacio;
*/

bool hayEspacio(cclase* Clase) {
    return (Clase->cupo_max - Clase->cupo > 0);
}

/**
    @brief Función que almacena el dni para dejar un registro de reserva;
*/

void ReservaID(eCliente alumno, cclase* Clase, string nombreClase, int hora)
{
    if(alumno.Apellido != "")
    {
        if(hayEspacio(Clase)&& Chequeoestado(alumno)==pago)
        {
            if(Clase->nombreclase==nombreClase && Clase->horario==hora)
            {
                Clase->id[Clase->cupo-1]=alumno.id;
            }
            Clase->cupo++;
        }
    }
}
/**
    @brief Función chequeo estado de cuota
*/



/**
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



