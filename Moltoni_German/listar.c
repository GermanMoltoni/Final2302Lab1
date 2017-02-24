#include "listar.h"
#include "validaciones.h"
#include "archivos.h"
#include <stdio.h>


void listar_clientes(Persona* personas,int len)
{
    int i;
    if(personas != NULL && len >0)
    {
        for(i=0;i<len;i++)
        {
            Persona* pPersona= personas+i;
            if(validar_caracteres(pPersona->nombre,3,30) && validar_caracteres(pPersona->apellido,3,30) && validar_marcaYNro(pPersona->nroTarjeta) && validar_id(pPersona->id && validar_mail(pPersona->mail,3,40)))
            {
                print_persona(personas+i);
            }
        }
    }
}
void listar_master(Persona* personas,int len)
{
    int i;
    if(personas != NULL && len >0)
    {
        for(i=0;i<len;i++)
        {Persona* pPersona= personas+i;
            if(validar_caracteres(pPersona->nombre,3,30) && validar_caracteres(pPersona->apellido,3,30) && validar_marcaYNro(pPersona->nroTarjeta) && validar_id(pPersona->id && validar_mail(pPersona->mail,3,30)))
            {
                char nro[17];
                strcmp(nro,pPersona->nroTarjeta);
                char cabezera[3]={nro[0],nro[1]};
                if(strcmp(cabezera,"51") == 0 ||  strcmp(cabezera,"52") == 0 || strcmp(cabezera,"53") == 0 || strcmp(cabezera,"54") == 0 ||strcmp(cabezera,"55") == 0)
                    print_persona(personas+i);
            }
        }
    }
}

void listar_visa(Persona* personas,int len)
{
    int i;
    if(personas != NULL && len >0)
    {
        for(i=0;i<len;i++)
        {
            Persona* pPersona=personas+i;
            if(validar_caracteres(pPersona->nombre,3,30) && validar_caracteres(pPersona->apellido,3,30) && validar_marcaYNro(pPersona->nroTarjeta) && validar_id(pPersona->id && validar_mail(pPersona->mail,3,30)))
            {
                char nro[17];
                strcmp(nro,pPersona->nroTarjeta);
                char cabezera[3]={nro[0]};
                if(cabezera[0] == '4')
                    print_persona(personas+i);
            }
        }
    }
}
void listar_errores(Persona* personas,int len)
{
    int i;
    int flag=0;
    if(personas != NULL && len >0)
    {
        for(i=0;i<len;i++)
        {
            Persona* pPersona = personas + i;
            if(validar_caracteres(pPersona->nombre,3,30))
                {
                    printf("Error de Nombre\n");
                    flag=1;
                }
            else if(validar_caracteres(pPersona->apellido,3,30))
                {
                    printf("Error de Apellido\n");
                    flag=1;
                }
            else if(validar_marcaYNro(pPersona->nroTarjeta))
                {
                    printf("Error de Nro de Tarjeta\n");
                    flag=1;
                }
            else if(validar_id(pPersona->id))
                {
                    printf("Error de id\n");
                    flag=1;
                }
            else if(validar_mail(pPersona->mail,3,30))
                {
                    printf("Error de mail\n");
                    flag=1;
                }
            else
                flag=0;
            if(flag)
                print_persona(pPersona);
        }
    }
}
void listar_american(Persona* personas,int len)
{
    int i;
    if(personas != NULL && len >0)
    {
        for(i=0;i<len;i++)
        {
            Persona* pPersona=personas+i;
            if(validar_caracteres(pPersona->nombre,3,30) && validar_caracteres(pPersona->apellido,3,30) && validar_marcaYNro(pPersona->nroTarjeta) && validar_id(pPersona->id && validar_mail(pPersona->mail,3,30)))
            {
                char nro[17];
                strcmp(nro,pPersona->nroTarjeta);
                char cabezera[3]={nro[0]};
                if(strcmp(cabezera,"34") == 0 ||  strcmp(cabezera,"37") == 0)
                    print_persona(pPersona);
            }
        }
    }
}
void print_persona(Persona *persona)
{
    printf("Nombre y Apellido: %s,%s  id: %s Nro de Tarjeta: %s Mail: %s\n",persona->nombre,persona->apellido,persona->id,persona->nroTarjeta,persona->mail);
}
