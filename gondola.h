#ifndef GONDOLA
#define GONDOLA

#include "producto.h"
#include "contenedor.h"

class Gondola: public Contenedor
{
	public:
		/*Carga productos al vector desde un archivo de texto.
		PRE: El archivo existe y esta escrito con el formato correcto. El vector existe y tiene espacio.
		POST: Se Agregan todos los Productos del archivo al vector*/
		void cargar_productos(string nombre_archivo);
		
		/*Busca un producto por su codigo en el contenedor.
		PRE: El vector existe y el Producto existe en el.
		POST: Imprime los atributos y devuelve la posicion en el vector del Producto cuyo nombre corresponde al recibido.*/
		int buscar_producto_codigo(string codigo_producto);
		
		/*Modifica el precio de un producto.
		PRE: El vector existe y el Producto existe en el. El Precio es un numero en el rango correcto.
		POST: Se modifica el precio del objeto cuya posicion corresponde a la recibida, con el valor recibido*/
		void modificar_precio(int posicion_buscada, double precio_nuevo);
		
		/*Devuelve el producto que se encuentra en la posicion enviada.
		PRE: El vector existe y el Producto existe en el.
		POST: Devuelve el Producto cuya posicion corresponde a la recibida.*/
		Producto obtener_producto(int posicion_buscada);
		
		/*Muestra por pantalla los productos en oferta.
		PRE: El vector existe.
		POST:  Lista por pantalla los Productos en Oferta dentro del vector y sus atributos.*/
		void ver_ofertas();
};

#endif
