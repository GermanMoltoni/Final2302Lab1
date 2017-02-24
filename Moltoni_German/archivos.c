#include "archivos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "listar.h"
int leer_archivo(char* path,Persona* personas)
{
    FILE* pArch;
    char nombre[30];
    char id[2];
    int len=0;
    char apellido[30];
    char mail[40];
    char nroTarjeta[20];
    Persona pPersona;
    if(path!= NULL && strlen(path) > 0)
    {
        pArch=fopen(path,"r");
        if(pArch != NULL && personas != NULL)
        {

            while(!feof(pArch))
            {
                fscanf(pArch,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",pPersona.id,pPersona.nombre,pPersona.apellido,pPersona.mail,pPersona.nroTarjeta);
                *(personas+len)=pPersona;
                if(feof(pArch))
                    break;
                len++;
            }
            fclose(pArch);
        }
    }
    return len;
}
