#include<stdio.h>
#include<stdlib.h>
typedef struct pile
{
    int n;
    struct pile *suivant;
}*pile;
pile nouvel_pile()
{
    return NULL;
}
int est_pile_vide(pile p)
{
    return (p==NULL);
}
pile empiler(pile p,int n)
{
    pile element = malloc(sizeof(pile));
    element->n = n;
    element->suivant = p;
    return element;
}