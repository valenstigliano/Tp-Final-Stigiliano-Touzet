#include "Gim.h"
#include "Clientes.h"

/**

    @brief Función se fija si hay espacio en la clase
    @return Error :: agrReserva::ExitoAgregar, agrReserva::ErrSinEspacio;
*/

bool hayEspacio(Horarios* clase ) {
    return (clase->CupoMax - clase->cupo > 0);
}

/**
    @brief Función que almacena el dni para dejar un registro de reserva;
*/

void ReservaDni(Cliente cliente,eClase clases, Horarios* reserva, Clase* clase)
{
    if(cliente != nullptr)
    {
        if(hayEspacio(reserva))
        {
            if(reserva->tipo==clases && reserva->turno==clase->horario.turno)
            {
                reserva->dni[reserva->cupo-1]=cliente.dni;
            }
        }
    }
}

/**
    @brief Función inscribirse a una clase
    @return Error :: agrReserva::ExitoAgregar, agrReserva::ErrSinEspacio;
*/
agrReserva inscripcion(Clase* clases, Cliente cliente)
{
    if(hayEspacio(clases)==ExitoAgregar)
    {
        clases->horario.cupo++;
        ReservaDni(cliente,clases->horario.tipo, clases->horario.cupo,clases);
        return ExitoAgregar;
    }else{
        return ErrSinEspacio;
    }
}
/**
@brief Función desinscribir
@return Error :: ErrDesinscribirse = -1, ExitoDesinscribirse = 1;
*/
rmReserva desinscripcion(clase* clases, horario* horarios, char dni)
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

}


void OrdenarPorApellido(horario* clase)
{
    horario aux;
    int cont;
    for(int i = 0; i < clase->cupo - 1; i++)
    { cont=0;
        for(int j = 0; j < clase->cupo - 1; j++)
        {
            if(clase[j].apellido[0]<=clase[j+1].apellido[0])
            {
                aux=clase[j];
                clase[j]=clase[j+1];
                clase[j+1]=aux;
                cont++;
            }
            if(cont==0)
                break;
        }
    }
}


agrReserva inscripcion(Clase* clases, Cliente cliente)
{
    if(hayEspacio(clases)==ExitoAgregar)
    {
        clases->horario.cupo++;
        ReservaDni(cliente,clases->horario.tipo, clases->horario.cupo,clases);
        return ExitoAgregar;
    }else{
        return ErrSinEspacio;
    }
}


agrReserva inscripcion(Clase* clases, Cliente cliente) {
    if (hayEspacio(&clases->horario) == ExitoAgregar) {
        if (clases->horario.cupo < clases->cupo_max) {
            clases->horario.cupo++;
            ReservaDni(cliente, clases->tipo, &clases->horario, clases);
            return ExitoAgregar;
        } else {
            return ErrSinEspacio;
        }
    } else {
        return ErrSinEspacio;
    }
}
