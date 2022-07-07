#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include "uampv.h"
void Semestre(GtkWidget *win , gpointer data)
{
    int i;
    uamfast *app;
    app = (gpointer)data;
    gtk_container_remove(GTK_CONTAINER(app->win) , app->fixed);
    app->fixed = gtk_fixed_new();
    app->background = gtk_image_new_from_file("back.jpg");
    for(int i=0;i<2;i++)
        app->fleche[i] = gtk_image_new_from_file("fleche.png");
    gtk_image_set_pixel_size(GTK_IMAGE(app->background),700);
    app->bs[0] = gtk_button_new_with_label("Semestre 1\t");
    app->bs[1] = gtk_button_new_with_label("Semestre 2\t");
    for (i=0 ; i< 2 ; i++)
        gtk_widget_set_size_request(app->bs[i],200,80);
    for(int i=0;i<2;i++)
    {
        gtk_button_set_image(GTK_BUTTON(app->bs[i]),app->fleche[i]);
        gtk_button_set_image_position(GTK_BUTTON(app->bs[i]),1);
    }
    gtk_container_add(GTK_CONTAINER(app->win) , app->fixed);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->background , 0 , 0);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bs[0] , 250 , 100);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bs[1] , 250 , 250);
    g_signal_connect(G_OBJECT(app->bs[0]) , "clicked" , G_CALLBACK(Matier) , (gpointer)app);
    gtk_widget_show_all(app->win);
}
void Matier(GtkWidget *win , gpointer data)
{
    int i;
    uamfast *app;
    app = (gpointer)data;
    gtk_container_remove(GTK_CONTAINER(app->win) , app->fixed);
    for(int i=0;i<7;i++)
        app->fleche[i] = gtk_image_new_from_file("fleche.png");
    app->fixed = gtk_fixed_new();
    app->bm[0] = gtk_button_new_with_label("Analyse 1\t");
    app->bm[1] = gtk_button_new_with_label("Algebre 1\t");
    app->bm[2] = gtk_button_new_with_label("Architecture\t");
    app->bm[3] = gtk_button_new_with_label("Technique\t");
    app->bm[4] = gtk_button_new_with_label("OMP\t");
    app->bm[5] = gtk_button_new_with_label("Algorithme\t");
    app->bm[6] = gtk_button_new_with_label("Mecanique\t");
    for(int i=0;i<7;i++)
    {
        gtk_button_set_image(GTK_BUTTON(app->bm[i]),app->fleche[i]);
        gtk_button_set_image_position(GTK_BUTTON(app->bm[i]),1);
    }
    app->background = gtk_image_new_from_file("back.jpg");
    gtk_image_set_pixel_size(GTK_IMAGE(app->background),700);
    for (i=0 ; i< 7 ; i++)
    {
        gtk_widget_set_size_request(app->bm[i],180,80);
    }
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->background , 0 , 0);
    gtk_container_add(GTK_CONTAINER(app->win) , app->fixed);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bm[0] , 50 , 50);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bm[1] , 50 , 180);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bm[2] , 50 , 310);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bm[3] , 280 , 50);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bm[4] , 280 , 180);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bm[5] , 280 , 310);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bm[6] , 480 , 180);
    g_signal_connect(G_OBJECT(app->bm[0]) , "clicked" , G_CALLBACK(Saisie_note) , (gpointer)app);
    gtk_widget_show_all(app->win);
}
void Saisie_note(GtkWidget *win , gpointer data)
{
    int i;
    uamfast *app;
    app = (gpointer)data;
    gtk_container_remove(GTK_CONTAINER(app->win) , app->fixed);
    app->fixed = gtk_fixed_new();
    /*app->background = gtk_image_new_from_file("back.jpg");
    gtk_image_set_pixel_size(GTK_IMAGE(app->background),700);*/
    for(i=0 ; i< 20 ; i++)
    app->en[i] = gtk_entry_new();
    app->matricule[0] = gtk_label_new("82331 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[0]) , "Note /20");
    app->matricule[1] = gtk_label_new("68332 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[1]) , "Note /20");
    app->matricule[2] = gtk_label_new("62331 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[2]) , "Note /20");
    app->matricule[3] = gtk_label_new("72851 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[3]) , "Note /20");
    app->matricule[4] = gtk_label_new("32931 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[4]) , "Note /20");
    app->matricule[5] = gtk_label_new("62331 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[5]) , "Note /20");
    app->matricule[6] = gtk_label_new("72931 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[6]) , "Note /20");
    app->matricule[7] = gtk_label_new("92331 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[7]) , "Note /20");
    app->matricule[8] = gtk_label_new("12331 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[8]) , "Note /20");
    app->matricule[9] = gtk_label_new("32331 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[9]) , "Note /20");
    app->matricule[10] = gtk_label_new("62331 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[10]) , "Note /20");
    app->matricule[11] = gtk_label_new("92301 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[11]) , "Note /20");
    app->matricule[12] = gtk_label_new("52331 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[12]) , "Note /20");
    app->matricule[13] = gtk_label_new("67331 : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[13]) , "Note /20");
    app->matricule[14] = gtk_label_new("Matricule : ");
    app->matricule[15] = gtk_label_new("Note : ");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[14]) , "matriculer");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[14]) , "Note /20");
    gtk_entry_set_placeholder_text(GTK_ENTRY(app->en[15]) , "Note /20");
    //gtk_widget_set_size_request(app->em[0],50,100);
    gtk_container_add(GTK_CONTAINER(app->win) , app->fixed);
    //gtk_fixed_put(GTK_FIXED(app->fixed) , app->background ,0 , 0);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[14] , 55 , 52);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[14] , 130 , 50);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[15] , 385 , 52);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[15] , 430 , 50);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[0] , 80 , 152);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[0] , 130 , 150);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[1] , 80 , 202);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[1] , 130 , 200);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[2] , 80 , 252);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[2] , 130 , 250);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[3] , 80 , 302);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[3] , 130 , 300);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[4] , 80 , 352);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[4] , 130 , 350);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[5] , 80 , 402);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[5] , 130 , 400);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[6] , 80 , 452);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[6] , 130 , 450);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[7] , 380 , 152);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[7] , 430 , 150);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[8] , 380 , 202);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[8] , 430 , 200);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[9] , 380 , 252);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[9] , 430 , 250);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[10] , 380 , 302);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[10] , 430 , 300);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[11] , 380 , 352);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[11] , 430 , 350);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[12] , 380 , 402);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[12] , 430 , 400);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->matricule[13] , 380 , 452);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->en[13] , 430 , 450);
    gtk_widget_show_all(app->win);
}
