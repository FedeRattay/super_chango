#ifndef SUPER
#define SUPER

#include "gondola.h"
#include "chango.h"
const int NO_ENCONTRADO = -1;

int mostrar_menu_principal(int &usuario);
int mostrar_menu_repositor();
int mostrar_menu_cliente();
void realizar_accion(int usuario, int opcion_elegida, bool &en_uso);
void acciones_repositor(int opcion_elegida);
void acciones_cliente(int opcion_elegida);

#endif
