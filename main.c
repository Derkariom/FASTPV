#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include "uampv.h"
int main(int argc , char *argv[])
{
    int i;
    gtk_init(&argc , &argv);
    uamfast *app;
    app = (uamfast*)g_malloc(sizeof(uamfast));
    app->win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    app->fleche[0] = gtk_image_new_from_file("fleche.png");
    app->fleche[1] = gtk_image_new_from_file("fleche.png");
    app->fleche[2] = gtk_image_new_from_file("fleche.png");
    app->bl[0] = gtk_button_new();
    app->bl[1] = gtk_button_new();
    app->bl[2] = gtk_button_new();
    app->fixed = gtk_fixed_new();
    app->background = gtk_image_new_from_file("back.jpg");
    gtk_image_set_pixel_size(GTK_IMAGE(app->background),700);
    gtk_window_set_position(GTK_WINDOW(app->win) , GTK_WIN_POS_CENTER);
    gtk_window_set_default_size(GTK_WINDOW(app->win) , 700 , 500);
    gtk_window_set_title(GTK_WINDOW(app->win) , "FAST PV");

    gtk_button_set_image(GTK_BUTTON(app->bl[0]),app->fleche[0]);
    gtk_button_set_image_position(GTK_BUTTON(app->bl[0]),1);
    gtk_button_set_label(GTK_BUTTON(app->bl[0]),"Licence 1\t\t");

    gtk_button_set_image(GTK_BUTTON(app->bl[1]),app->fleche[1]);
    gtk_button_set_image_position(GTK_BUTTON(app->bl[1]),1);
    gtk_button_set_label(GTK_BUTTON(app->bl[1]),"Licence 2\t\t");

    gtk_button_set_image(GTK_BUTTON(app->bl[2]),app->fleche[2]);
    gtk_button_set_image_position(GTK_BUTTON(app->bl[2]),1);
    gtk_button_set_label(GTK_BUTTON(app->bl[2]),"Licence 3\t\t");
    for (i=0 ; i< 3 ; i++)
    {
        gtk_widget_set_size_request(app->bl[i],200,80);
    }
    gtk_container_add(GTK_CONTAINER(app->win) , app->fixed);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->background , 0 , 0);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bl[0] , 250 , 50);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bl[1] , 250 , 200);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bl[2] , 250 , 350);
    g_signal_connect(G_OBJECT(app->bl[0]) , "clicked" , G_CALLBACK(Semestre) , (gpointer)app);
    /*gtk_fixed_put(GTK_FIXED(app->fixed) , app->bl[1] , 50 , 50);
    gtk_fixed_put(GTK_FIXED(app->fixed) , app->bl[2] , 50 , 50);*/
    g_signal_connect(G_OBJECT(app->win) , "delete-event" , G_CALLBACK(gtk_main_quit) , NULL);
    gtk_widget_show_all(app->win);

    gtk_main();
    return EXIT_SUCCESS;
}
// La modification
void bonjour()
{
    printf("Hello World");
}
void visionnaire()
{
    printf("SALUT LES VISIONNAIRE");
}