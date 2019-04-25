#ifndef PRODUCTO
#define PRODUCTO

class Producto
{
	private:
		string nombre;
		unsigned long long codigo;
		double precio;
		bool oferta;
	public:
		void cargar_nombre(string new_nombre);
		void cargar_codigo(unsigned long long new_codigo);
		void cargar_precio(double new_precio);
		void cargar_oferta(bool new_oferta);
		
		string get_nombre();
		unsigned long long get_codigo();
		double get_precio();
		bool get_oferta();
};

#endif
