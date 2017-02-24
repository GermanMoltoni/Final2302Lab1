#ifndef VALIDACIONES_H
#define VALIDACIONES_H

int validar_id(char* id);
int validar_caracteres(char* nombre,int minLen,int maxLen);
int validar_mail(char* nombre,int minLen,int maxLen);
int validar_marcaYNro(char* nro);
int validar_tarjeta(char* nro);

#endif // VALIDACIONES_H
