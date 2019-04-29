#include <iostream>
using namespace std;
#include "super.h"

int main()
{
	bool en_uso = true;
	Gondola gondola;
	Chango chango;
	
	int usuario = 0;
	int opcion_elegida = 0;
	
	while(en_uso == true)
	{
		opcion_elegida = mostrar_menu_principal(usuario); //QUE ACCION Y PARA QUE TIPO DE USUARIO SE REALIZARA
		if(opcion_elegida == -1)
			cout<<"ERROR opcion Incorrecta"<<endl;
		else
			realizar_accion(usuario, opcion_elegida, en_uso, gondola, chango);
	}
	return 0;
}
