#ifndef __UAMPV__H__
#define __UAMPV__H__
typedef struct
{
    GtkWidget *win;
    GtkWidget *fixed;
    GtkWidget *bl[3];
    GtkWidget *bs[2];
    GtkWidget *bm[7];
    GtkWidget *matricule[20];
    GtkWidget *en[20];
    GtkWidget *button[10];
    GtkWidget *background;
    GtkWidget *fleche[3];
}uamfast;
void Semestre(GtkWidget *win , gpointer data);
void Matier(GtkWidget *win , gpointer data);
void Saisie_note(GtkWidget *win , gpointer data);
#endif