#ifndef CHANGO
#define CHANGO

#include "producto.h"

class Chango: public Contenedor
{
	private:
		int posicion;
	public:
		double calcular_total();
		void cargar_producto(Producto producto_elegido);
};

#endif
