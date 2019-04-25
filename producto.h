#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;
#include <string>

class Producto
{
	private:
		string nombre;
		unsigned long long codigo;
		double precio;
		bool oferta;

	public:
		//Constructor de oficio.
		Producto();
		//Constructor personalizado.
		Producto(string _nombre, unsigned long long _codigo_barra, double _precio, bool _oferta);
		//Metodos Asignar
		void asignar_nombre(string);
		void asignar_codigo_barra(unsigned long long);
		void asignar_precio(double);
		void asignar_oferta(bool);
		//Metodos Obtener
		string obtener_nombre();
		unsigned long long obtener_codigo_barra();
		double obtener_precio();
		bool obtener_oferta();
};

#endif /* PRODUCTO_H */