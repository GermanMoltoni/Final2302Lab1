#ifndef ARCHIVOS_H
#define ARCHIVOS_H
typedef struct{
char id[10];
char nombre[15];
char apellido[15];
char mail[30];
char nroTarjeta[19];

} Persona;
int leer_archivo(char* path,Persona* personas);

#endif // ARCHIVOS_H
//validar marca
//validar longitud de tarjeta
