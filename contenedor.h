#ifndef CONTENEDOR_H
#define CONTENEDOR_H

#include "producto.h"

class Contenedor
{
protected:
	int tamanio;
	int espacio_ocupado;
	Producto *contenido;
	void mostrar_producto(Producto un_producto);
	void redimensionar(int nuevo_tamanio);

public:
	Contenedor();
	int obtener_cantidad_productos();
	void ver_contenido();
	int esta_producto(string nombre_producto);
	void buscar_producto_nombre(string nombre_producto);//Este metodo ver si sirve??
	virtual void agregar_producto(Producto un_producto);
	void quitar_producto(string nombre_producto);
	~Contenedor();
};

#endif
