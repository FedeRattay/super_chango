#ifndef GONDOLA
#define GONDOLA

#include "producto.h"
#include "contenedor.h"

class Gondola: public Contenedor
{
	public:
		void cargar_productos(string nombre_archivo);
		int buscar_producto_codigo(string codigo_producto);
		void modificar_precio(int posicion_buscada, double precio_nuevo);
		void ver_ofertas();
		//~Gondola();
};

#endif
