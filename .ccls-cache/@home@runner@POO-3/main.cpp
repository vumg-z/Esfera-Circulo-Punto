#include "circulo.h"
#include "esfera.h"
#include "punto.h"
#include <iostream>

using namespace std;

int main() {
  Circulo circulo(4, 10, 20);
  circulo.despliegue();
  cout << "area: " << circulo.getArea() << endl;
  cout << "perimetro: " << circulo.getPerimetro() << endl;

  Esfera esfera(10, 0, 0);
  cout << "area esfera: " << esfera.getArea() << endl;
  cout << "volumen esfera: " << esfera.getVolumen() << endl;
}