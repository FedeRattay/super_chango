#ifndef SUPER
#define SUPER

#include "gondola.h"
#include "chango.h"
const int NO_ENCONTRADO = -1;

//Se elije que tipo de usuario manejara el programa.
int mostrar_menu_principal(int &usuario);
//Muestra las opciones accesibles por el repositor.
int mostrar_menu_repositor();
//Muestra las opciones accesibles por el cliente.
int mostrar_menu_cliente();
//Realiza el metodo elegido por el usuario.
void realizar_accion(int usuario, int opcion_elegida, bool &en_uso, Gondola &gondola, Chango &chango);

#endif
