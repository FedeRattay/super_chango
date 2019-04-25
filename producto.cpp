#include "producto.h"

//Producto Metodos Asignar
void Producto::asignar_nombre(string _nombre) { nombre = _nombre; }
void Producto::asignar_codigo_barra(unsigned long long _codigo_barra) { codigo = _codigo_barra; }
void Producto::asignar_precio(double _precio) { precio = _precio; }
void Producto::asignar_oferta(bool _oferta) { oferta = _oferta; }
// Producto Metodos Obtener
string Producto::obtener_nombre() { return nombre; }
unsigned long long Producto::obtener_codigo_barra() { return codigo; }
double Producto::obtener_precio() { return precio; }
bool Producto::obtener_oferta() { return oferta; }

Producto::Producto()
{
	asignar_nombre("");
	asignar_codigo_barra(0);
	asignar_precio(0);
	asignar_oferta(0);
}

Producto::Producto(string _nombre, unsigned long long _codigoBarra, double _precio, bool _oferta)
{
	asignar_nombre(_nombre);
	asignar_codigo_barra(_codigoBarra);
	asignar_precio(_precio);
	asignar_oferta(_oferta);
}