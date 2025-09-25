/*Sistema de Gestión de Inventario para una Ferretería
Sistema de gestión de inventario simple para sus productos más vendidos. 
El sistema debe ser capaz de almacenar, gestionar y consultar información clave sobre un número fijo de artículos.
Debido a las limitaciones de hardware y la necesidad de un rendimiento predecible sin sobrecarga de memoria dinámica, se ha decidido utilizar arreglos paralelos.

Requisitos Funcionales


    Consulta de Productos: El usuario podrá ingresar un código de producto para ver toda la información asociada: nombre, cantidad en stock y precio. Si el producto no existe, se deberá mostrar un mensaje de error claro.

    Actualización de Inventario: El usuario podrá ingresar un código de producto y una cantidad para actualizar el stock. La cantidad puede ser positiva (sumar al stock) o negativa (restar del stock). No se permitirá que la cantidad en stock sea inferior a cero.

    Generación de Reporte: El programa deberá mostrar un reporte completo de todos los productos en el inventario, listando el código, nombre, cantidad y precio de cada uno.

    Búsqueda del Producto Más Caro: El sistema deberá identificar y mostrar el nombre y el precio del producto con el precio unitario más alto.
    
    El sistema debe manejar entradas inválidas del usuario (como letras en campos numéricos o códigos de producto que no existen) mostrando mensajes de error apropiados sin terminar la ejecución abruptamente.
*/

//Pienso que esto deberia estar metido en un while que cierre hasta que el usuario lo cierre para poderse regresar si no cumple las validaciones.

#include <iostream>
#include <string>

void validacionInt(int numero);
void reporte(int cod[], std::string nom[], int stk[], float pre[]);

int main(){
//Código de Producto: Un número entero único que identifica al producto.
//Nombre del Producto: Una cadena de caracteres que describe el artículo.
//Cantidad en Stock: Un número entero que representa el inventario actual.
//Precio Unitario: Un número de punto flotante que indica el precio de venta de cada unidad.

//Carga de Datos Iniciales

  int codigo[100]{101,102,103,104,105};
  std::string nombre[100]{"martillo","clavos","taladro","destornillador","pegamento"};
  int stock[100]{5,100,6,30,10};
  float precio[100]{100,5.5,500,20.5,20};
  
  bool dale = true;
  int opcion;
  do{
    std::cout << "Escoja su accion:" << std::endl;
    std::cout << "1:  Consultar un producto" << std::endl;
    std::cout << "2:  Actualizar inventario" << std::endl;
    std::cout << "3:  Generar reporte completo" << std::endl;
    std::cout << "4:  Encontrar el producto mas caro" << std::endl;
    std::cout << "0:  Salir" << std::endl;
    std::cin >> opcion;
    switch(opcion){
      case 1:
        std::cout << "Opcion 1:" << std::endl;
        
      break;
      case 0:
        dale = false;
      break;
    }
  }while(dale);
  
  reporte(codigo,nombre,stock,precio);
  validacionInt(28);
}
void reporte(int cod[], std::string nom[], int stk[], float pre[]){
  for (int i = 0; i<100;i++){
    if(cod[i])
    std::cout << "aca anda el array" << cod[i];
  }
}
void validacionInt(int numero){
  std::cout << "no valida" << numero;
}
