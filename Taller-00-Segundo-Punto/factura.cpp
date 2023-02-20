#include <iostream>
#include <vector>
using namespace std;
#include"factura.h"
#include <fstream>

void registrar_datos(vector<Cliente> &clientes, int n){
  for (int i=0;i<n;i++){
    Cliente c, *ptr;
    ptr = &c;
    cout<< " |  Nombre  |->" ;
    cin>>ptr->nombre;
    cout<< " |   Edad   |->";
    cin>>ptr->edad;
    cout<< " | Telefono |->";
    cin>>ptr->telefono;
    cout<< " |   Total  |->";
    cin>>ptr->total;
    clientes.push_back(*ptr);
  }
}
void crear_archivo(vector<Cliente> &clientes, int n){
  Cliente *ptr;
  string nombreArchivo = "factura.txt";
  ofstream f(nombreArchivo, ios::app);
  if(f.is_open()){
    for (int i = 0; i<n; i ++){
      ptr=&clientes[i];
      f << "Nombre: " << ptr->nombre << " Edad:" << ptr->edad << " Telefono:"<< ptr->telefono<<" Total: "<<ptr->total<<endl;
    }
    f.close();
  }
}
void imprimir_factura(vector<Cliente> &clientes, int n){
  Cliente *ptr;
  string line;
  string nombreArchivo = "factura.txt";
  cout << "---------------------------" <<endl;
  cout << "       F A C T U R A       " <<endl;
  cout << "---------------------------" <<endl;
  ifstream f(nombreArchivo, ios::in);
  if(f.is_open()){
    while(getline(f, line)){
      cout << "       C L I E N T E   " << endl;
      cout << line << endl;
      
    }
  }
}