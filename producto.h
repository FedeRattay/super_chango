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
	Producto();
	Producto(string _nombre, unsigned long long codigoBarra, double precio, bool oferta);
	void asignarNombre(string);
	void asignarCodigoBarra(unsigned long long);
	void asignarPrecio(double);
	void asignarOferta(bool);

	string obtenerNombre();
	unsigned long long obtenerCodigoBarra();
	double obtenerPrecio();
	bool obtenerOferta();
};

#endif