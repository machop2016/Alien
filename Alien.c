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

int main(){
struct alien_t *lista_aliens;
struct alien_t *tmp;
struct planeta_t *lista_planetas;
struct planeta_t *tmp1;
struct idioma_t *lista_idioma;
struct idioma_t *tmp2;
lista_planetas = malloc(sizeof(planeta));
tmp1 = malloc(sizeof(planeta));
lista_aliens = malloc(sizeof(alien));
tmp = malloc(sizeof(alien));
lista_idioma = malloc(sizeof(idioma));
tmp2 = malloc(sizeof(idioma));
strcpy(lista_aliens->nombre,"Alien1:Alf");
strcpy(lista_planetas->nombre,"Mar Zara");
lista_aliens->id=2015090756;
lista_aliens->planetas=lista_planetas;
lista_aliens->idiomas=lista_idioma;
lista_planetas->starwars_code=283182;
lista_planetas->agua='T';
lista_planetas->oxigeno='F';
strcpy(lista_idioma->nombre,"Namekuseiano");
lista_idioma->simbolo=28;
lista_idioma->tipo='A';
lista_idioma->planeta=lista_planetas;
printf("\nPrimer elemento de la lista \n");
printf("%s \n",lista_aliens->nombre);
printf("%d \n",lista_aliens->id);
printf("%s \n",lista_planetas->nombre);
printf("%d \n",lista_planetas->starwars_code);
printf("%c \n",lista_planetas->agua);
printf("%c \n",lista_planetas->oxigeno);
printf("%s \n",lista_idioma->nombre);
printf("%d \n",lista_idioma->simbolo);
printf("%c \n",lista_idioma->tipo);
printf("%s \n",lista_idioma->planeta->nombre);
strcpy(tmp->nombre,"Alien2:Goku");
tmp->id=2015090748;
strcpy(tmp1->nombre,"Hut");
tmp1->starwars_code=23221;
tmp1->agua='T';
tmp1->oxigeno='T';
strcpy(tmp2->nombre,"Nargoniano");
tmp2->simbolo=55;
tmp2->tipo='B';
tmp2->planeta=lista_planetas;
(*lista_planetas).Siguiente=tmp1;
(*lista_aliens).Siguiente=tmp;
(*lista_idioma).Siguiente=tmp2;
printf("\nSiguiente de la lista \n");
printf("%s \n",(*lista_aliens).Siguiente->nombre);
printf("%d \n",(*lista_aliens).Siguiente->id);
printf("%s \n",(*lista_aliens).planetas->Siguiente->nombre);
printf("%d \n",(*lista_aliens).planetas->Siguiente->starwars_code);
printf("%c \n",(*lista_aliens).planetas->Siguiente->agua);
printf("%c \n",(*lista_aliens).planetas->Siguiente->oxigeno);
printf("%s \n",(*lista_aliens).idiomas->Siguiente->nombre);
printf("%d \n",(*lista_aliens).idiomas->Siguiente->simbolo);
printf("%c \n",(*lista_aliens).idiomas->Siguiente->tipo);
printf("%s \n",(*lista_aliens).idiomas->Siguiente->planeta->Siguiente->nombre);
}
