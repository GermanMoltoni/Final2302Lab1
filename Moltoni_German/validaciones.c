#include <stdio.h>
#include <string.h>
#include "validaciones.h"
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int validar_id(char* id)
{

    int retorno=1;

    return retorno;

}
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int validar_marcaYNro(char* nro)
{
    int retorno=0;
    char cabezera[3]={nro[0],nro[1]};
    if(strlen(nro) == 15 && (strcmp(cabezera,"34") == 0 ||  strcmp(cabezera,"37") == 0))
        retorno=1;
    else if (strlen(nro) == 16 && (strcmp(cabezera,"51") == 0 ||  strcmp(cabezera,"52") == 0 || strcmp(cabezera,"53") == 0 || strcmp(cabezera,"54") == 0 ||strcmp(cabezera,"55") == 0) )
        retorno=1;
    else if ((strlen(nro) == 13 || strlen(nro) == 16 ) && cabezera[0] == '4')
        retorno=1;
    return retorno;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int validar_tarjeta(char* nro)
{
    int nroInv[strlen(nro)];
    int i;
    int retorno=0;
    int j=0;
    int suma=0;
    for(i=strlen(nro)-1;i>=0;i--)
    {
        nroInv[j] = *(nro+i) - 48;

        if((j+1) % 2 == 0)
            nroInv[j]=nroInv[j]*2;
        if(nroInv[j] > 9)
            nroInv[j]=nroInv[j]-9;
        suma=suma+nroInv[j];
        j++;
    }
    if(suma%10 == 0)
        retorno=1;
    return retorno;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int validar_caracteres(char* nombre,int minLen,int maxLen)
{
    int retorno=0;
    char *p=&nombre[0];
    if(strlen(nombre)>minLen && strlen(nombre) < maxLen)
    {
        retorno=1;
        while(*p != '\0')
        {
            if((*p > 'Z' || *p < 'A') && (*p > 'z' || *p < 'a'))
                retorno=0;
            p++;
        }
    }
    return retorno;

}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int validar_mail(char* nombre,int minLen,int maxLen)
{
    int retorno=0;
    int flag=0;
    char *p=&nombre[0];
    if(strlen(nombre)>minLen && strlen(nombre) < maxLen)
    {
        while(*p != '\0')
        {
            if(*p == '@' || flag)
            {
                flag=1;
                if(*p == '.')
                {
                    retorno=1;
                    break;
                }

            }
            p++;
        }
    }
    return retorno;

}
