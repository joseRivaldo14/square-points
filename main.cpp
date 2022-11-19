#include "chico.h"
#include "grande.h"
#include <iostream>
using namespace std;

void menu() {
  cout << "Dots and Boxes" << endl;
  cout << "--------------" << endl;
  cout << "1.Tablero 6x6" << endl;
  cout << "2.Tablero 10x10" << endl;
  cout << "0.Salir" << endl;
  cout << "Seleccione una opcion: ";
  int opcion;
  cin >> opcion;
  cout << endl;
  while (opcion < 0 || opcion > 2) {
    cout << "Ingrese una opcion valida: ";
    cin >> opcion;
  }
  if (opcion == 1) {
    chico tablero1;
    tablero1.generate_tablero();
  }
  if (opcion == 2) {
    grande tablero2;
    tablero2.generate_tablero();
  }
}
int main() { menu(); }