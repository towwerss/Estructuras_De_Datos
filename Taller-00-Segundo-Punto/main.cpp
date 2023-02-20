#include <iostream>
#include <vector>
using namespace std;
#include"factura.h"

int main() {
  vector<Cliente> clientes;
  cout << "----------------------" << endl;
  cout << "     BIENVENIDO        " << endl;
  cout << "----------------------" << endl;
  cout << "¿Cuantos clientes desea ingresar?" << endl;
  int n;
  cin>> n;
  registrar_datos(clientes,n);
  crear_archivo(clientes,n);
  imprimir_factura(clientes,n);

}