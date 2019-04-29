#ifndef CONTENEDOR_H
#define CONTENEDOR_H

#include "producto.h"

class Contenedor
{
protected:
	const int NO_ENCONTRADO = -1;
	int tamanio;
	int espacio_ocupado;
	Producto *contenido;
	void mostrar_producto(Producto un_producto);
	void redimensionar(int nuevo_tamanio);

public:
	/*Constructor sin parametros.
	PRE: -
	POST: Devuelve un Contenedor con atributos nulos.*/
	Contenedor();
	
	/*Devuelve la cantidad de espacios del vector ocupados por un Producto.
	PRE: El vector existe.
	POST: Devuelve un entero, el cual es el 'tope' del vector.*/
	int obtener_cantidad_productos();
	
	/*Muestra el contenido del Contenedor.
	PRE: El vector existe.
	POST: Lista por pantalla todos los Productos y sus atributos dentro del vector.*/
	void ver_contenido();
	
	/*Busca un producto por su nombre en el contenedor.
	PRE: El vector existe y el Producto existe en el.
	POST: Imprime los atributos y devuelve la posicion en el vector del Producto cuyo nombre corresponde al recibido.*/
	int buscar_producto_nombre(string nombre_producto);
	
	/*Agrega un producto al vector.
	PRE: El vector y el Producto existen. Hay espacio en el vector.
	POST: El vector contendra el producto recibido en la primera posicion vacia que encuentre(Pos = tope)*/
	virtual void agregar_producto(Producto un_producto);
	
	/*Elimina un producto del vector.
	PRE: El vector existe y el Producto existe en el.
	POST: Se elimina el Producto del vector.*/
	void quitar_producto(int posicion_buscada);
	
	/*Destructor.
	PRE: -
	POST: -*/
	~Contenedor();
};

#endif
