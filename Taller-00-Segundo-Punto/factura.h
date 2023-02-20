#include <iostream>
#include <vector>
using namespace std;
#ifndef factura_h
#define factura_h

struct Cliente{
 string nombre;
 int edad;
 string telefono;
 float total;
};

void registrar_datos(vector<Cliente> &clientes, int n);
void crear_archivo(vector<Cliente> &clientes, int n);
void imprimir_factura(vector<Cliente> &clientes, int n);

#endif
