#ifndef CONTENEDOR_H
#define CONTENEDOR_H

#include "producto.h"

class Contenedor
{
	protected:
		int tamanio;
		Producto *contenido;

	public:
		Contenedor();

		void ver_contenido();
		void buscar_producto_nombre(string nombre_producto);
		void quitar_producto(string nombre_producto);
		~Contenedor();
};

#endif
