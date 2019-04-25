#include <iostream>
using namespace std;
#include "producto.h"

void Producto::cargar_nombre(new_nombre)
{
	nombre = new_nombre;
}
void Producto::cargar_codigo(new_codigo)
{
	codigo = new_codigo;
}
void Producto::cargar_precio(new_precio)
{
	precio = new_precio;
}
void Producto::cargar_oferta(new_oferta)
{
	oferta = new_oferta;
}

string Producto::get_nombre()
{
	return nombre;
}
unsigned long long Producto::get_codigo()
{
	return codigo;
}
double Producto::get_precio()
{
	return precio;
}
bool Producto::get_oferta()
{
	return oferta;
}