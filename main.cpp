#include "cilindro.h"
#include "cilindroHueco.h"
#include "circulo.h"
#include "esfera.h"
#include "punto.h"
#include <iostream>

using namespace std;

int main() {
  /*
    Circulo circulo(4, 10, 20);
    circulo.despliegue();
    cout << "area: " << circulo.getArea() << endl;
    cout << "perimetro: " << circulo.getPerimetro() << endl;

    Esfera esfera(10, 0, 0);
    cout << "area esfera: " << esfera.getArea() << endl;
    cout << "volumen esfera: " << esfera.getVolumen() << endl;

    // distancia entre dos puntos, punto y otroPunto
    Punto punto(3, 25);
    Punto otroPunto(20, 6);

    std::cout << "la distancia entre los puntos es: ";
    std::cout << punto.distanciaEntreDosPuntos(otroPunto);
  */

  Cilindro cilindro(20, 0, 0, 10);
  CilindroHueco cilindroHueco(20, 10);

  cout << "cilindro area: " << cilindro.getArea() << endl;
  cout << "cilindro perimetro: " << cilindro.getPerimetro() << endl;
  cout << "cilindro volumen: " << cilindro.getVolumen() << endl;

  cout << "cilindro hueco area: " << cilindroHueco.getArea() << endl;
  cout << "cilindro hueco volumen: " << cilindroHueco.getVolumen() << endl;
}
