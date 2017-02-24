#include <stdio.h>
#include <stdlib.h>
#include "archivos.h"
#include "validaciones.h"
#include "listar.h"
int main()
{

    Persona personas[10000];
    int opc=0;
    int i;
    int len = leer_archivo("C:\\Users\\alumno\\Desktop\\data.csv",&personas);
    while(opc != 6)
    {
        printf("1.Listar Todos\n2.Listar MasterCard\n3.Listar Visa\n4.Listar American\n5.Listar errores\n6.Salir");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
                listar_clientes(&personas,len);
                break;
            case 2:
                listar_master(&personas,len);
                break;
            case 3:
                listar_visa(&personas,len);
                break;
            case 4:
                listar_american(&personas,len);
                break;
            case 5:
                listar_errores(&personas,len);
                break;
            case 6:
                break;
            default:
                printf("Error\n");
                break;
        }
    }

    return 0;
}
