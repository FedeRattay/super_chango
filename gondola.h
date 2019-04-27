#ifndef GONDOLA
#define GONDOLA

#include "producto.h"
#include "contenedor.h"

class Gondola: public Contenedor
{
	public:
		void cargar_productos(string nombre_archivo);
		void cargar_un_producto(Producto producto_nuevo);
		void buscar_producto_codigo(string codigo_producto);
		void modificar_precio(string nombre_producto, double precio_nuevo);
		void ver_ofertas();
		//~Gondola();
};

#endif
