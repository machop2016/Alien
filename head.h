#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct alien_t{
char nombre[30];
int id;
struct planeta_t *planetas;
struct idioma_t *idiomas;
struct alien_t *Siguiente;
}alien;

struct planeta_t{
char nombre[30];
int starwars_code;
char agua;
char oxigeno;
struct planeta_t *Siguiente;
}planeta;

struct idioma_t{
char nombre[30];
char tipo;
int simbolo;
struct idioma_t *Siguiente;
struct planeta_t *planeta;
}idioma;
