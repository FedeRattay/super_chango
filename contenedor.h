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
	Contenedor();
	int obtener_cantidad_productos();
	void ver_contenido();
	int buscar_producto_nombre(string nombre_producto);//Este metodo ver si sirve??
	virtual void agregar_producto(Producto un_producto);
	void quitar_producto(int posicion_buscada);
	~Contenedor();
};

#endif
