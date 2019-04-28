----------------------------------
..........	........  	..........
..........	..........	...   ....
   ....   	...   ....	...   ....
   ....   	...   ....	...   ....
   ....   	...   ....	..........
   ....   	...   ....	..........
   ....   	...   ....	...   ....
   ....   	..........	...   ....
   ....   	........  	...   ....
----------------------------------
Producto:
		-nombre: string;
		-codigo: string;
		-precio: double;
		-oferta: bool;
		
		+Producto();
		+Producto(string,string,double,bool);
		+void asignar_nombre(string);
		+void asignar_codigo_barra(string);
		+void asignar_precio(double);
		+void asignar_oferta(bool);
		+string obtener_nombre();
		+string obtener_codigo_barra();
		+double obtener_precio();
		+bool obtener_oferta();
		+void operator=(Producto);
----------------------------------
//////////////////////////////////
----------------------------------
Contenedor:
		:-:tamanio: int;
		:-:espacio_ocupado: int;
		
		+Producto *contenido;
		+void mostrar_producto(Producto);
		+void redimensionar(int);
		+Contenedor();
		+void ver_contenido();
		+void buscar_producto_nombre(string);
		+virtual void agregar_producto(Producto);
		+void quitar_producto(string);
		+~Contenedor();
----------------------------------
//////////////////////////////////
----------------------------------
Contenedor>>Gondola: //REPOSITOR
		+void cargar_productos(string);
		+void buscar_producto_codigo(string);
		+void modificar_precio(string,double);
		+void ver_ofertas();
----------------------------------
//////////////////////////////////
----------------------------------
Contenedor>>Chango: //CLIENTE
		+void calcular_total();
----------------------------------
