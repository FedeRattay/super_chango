#ifndef CONTENEDOR
#define CONTENEDOR

#include "producto.h"

class Contenedor
{
	protected:
		int tamanio;
		Producto contenido[1];
	public:
		void ver_contenido();
		void buscar_producto_nombre(string nombre_producto);
		void quitar_producto(string nombre_producto);
};

#endif
