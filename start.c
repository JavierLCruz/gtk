#include <gtk/gtk.h>

int main (int argc, char **argv) {

gtk_init (&argc, &argv);

GtkWidget *window;  // gtk code comes here
window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
gtk_widget_show_all(window);

gtk_main ();

return 0;

}
