#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;
#include <string>

class Producto
{
	private:
		string nombre;
		string codigo;
		double precio;
		bool oferta;

	public:
		/*Constructor sin parametros.
		PRE: -
		POST: Devuelve un Producto con atributos nulos.*/
		Producto();
		
		/*Constructor con parametros.
		PRE: Los atributos son del tipo correcto.
		POST: Devuelve un Producto con los atributos recibidos.*/
		Producto(string _nombre, string _codigo_barra, double _precio, bool _oferta);
		
		/*Metodos de Asignar
		PRE: El Producto existe.
		POST: Asigna el valor recibido al atributo.*/
		void asignar_nombre(string _nombre);
		void asignar_codigo_barra(string _codigo_barra);
		void asignar_precio(double _precio);
		void asignar_oferta(bool _oferta);
		
		/*Metodos de Obtener
		PRE: El Producto existe.
		POST: Devuelve el atributo de un Producto.*/
		string obtener_nombre();
		string obtener_codigo_barra();
		double obtener_precio();
		bool obtener_oferta();
		
		void operator=( Producto &un_producto);
};

#endif /* PRODUCTO_H */
