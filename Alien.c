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
struct idioma_t *siguiente;
struct planeta_t *planeta;
}idioma;

int main(){
struct alien_t *lista_aliens;
struct alien_t *tmp;
struct alien_t *
lista_aliens = malloc(sizeof(alien));
tmp = malloc(sizeof(alien));
strcpy(lista_aliens->nombre,"Alien1:Alf");
lista_aliens->id=2015090756;
printf("\nPrimer elemento de la lista \n");
printf("%s \n",lista_aliens->nombre);
printf("%d \n",lista_aliens->id);
strcpy(tmp->nombre,"Alien2:Goku");
tmp->id=2015090748;
printf("\nTemporal \n");
printf("%s \n",tmp->nombre);
printf("%d \n",tmp->id);
(*lista_aliens).Siguiente=tmp;

printf("\nSiguiente de la lista \n");
printf("%s \n",(*lista_aliens).Siguiente->nombre);
printf("%d \n",(*lista_aliens).Siguiente->id);
}
