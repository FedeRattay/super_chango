#ifndef GONDOLA
#define GONDOLA

#include "producto.h"

class Gondola: public Contenedor
{
	public:
		void cargar_producto(int tamanio, string nombre_archivo);
		void buscar_producto_codigo(unsigned long long codigo_producto);
		void modificar_precio(string nombre_producto, double precio_nuevo);
		void ver_ofertas();
};

#endif
