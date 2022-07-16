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
int sommet(pile p)
{
    int s;
    if(est_pile_vide(p))
        printf("LA PILE EST VIDE\n");
    else
        s = p->n;
    return s;
}
int main()
{
    pile p = nouvel_pile();
    p = empiler(p,5);
    printf("Le sommet de la pile est %d\n" , sommet(p));
    p = empiler(p,5);
    printf("Le sommet de la pile est :%s" , sommet(p));
    return 0;
}