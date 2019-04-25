T. D. A.

----------------------------------
Producto: //2 Constructores: 1 sin parametros y otro con los 4 atributos(Cuando carga desde el .txt).
	-nombre: string
	-codigo: unsigned long long //Porque tenia que ser de 13 digitos
	-precio: float
	-oferta: bool
	
	+set_nombre(nom)
		...etc
	+get_nombre()
		...etc
----------------------------------
//////////////////////////////////
----------------------------------
Contenedor: //CLASE PADRE //1 Constructor sin parametro que inicializa todo en nulo.
	-tamanio: int
	-contenido[]: producto
	
	+ver_contenido()
	+buscar_producto_nombre(nombre_prod) // * Reciben sus parametros del metodo buscar producto.
	+quitar_producto(nombre_prod) *
----------------------------------
//////////////////////////////////
----------------------------------
Gondola: //REPOSITOR
	
	+cargar_producto(tamanio, nombre_txt) //Carga desde el .txt & Recibe un tamanio = cantidad de lineas del archivo desde una funcion en el main.
	+buscar_producto_codigo(cod_prod)
	+modificar_precio(nombre_prod,precio_nuevo) *
	+ver_ofertas()
----------------------------------
//////////////////////////////////
----------------------------------
Chango: //CLIENTE
	
	+calcular_total() //Devuelve total con ofertas consideradas.
	+cargar_producto(producto_elegido) *// 50 MAX. Usa el auxiliar para expandir su tamanio.
----------------------------------
