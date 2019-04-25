#include <iostream>
using namespace std;
#include "chango.h"

double Chango::calcular_total()
{
	double gasto_total = 0;
	double descuento = 0;
	for(int i = 0; i < tamanio; i++)
	{
		if(contenido[i].oferta)
		{
			descuento = (0.1*contenido[i].precio);
			gasto_total += (contenido[i].precio-descuento);
		}
		else
			gasto_total += contenido[i].precio;
	}
}
void Chango::cargar_producto(Producto producto_elegido)
{
	//contenido[posicion] = producto_elegido;
	//posicion++;
}
