#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
#include <math.h>

using namespace std; // Agregar esta línea para usar std::cout

class Punto {
private:
  int x;
  int y;

public:
  Punto(int x, int y) {
    this->x = x;
    this->y = y;
  }

  Punto() {}

  double distanciaEntreDosPuntos(Punto otroPunto) {
    double distancia = sqrt(pow(otroPunto.x - x, 2) + pow(otroPunto.y - y, 2));
    return distancia;
  }

  int getX() { return x; }

  int getY() { return y; }

  void hola() { std::cout << "si"; }

  // crear clases puntoCirculo y CirculodeEsfera
};

#endif // PUNTO_H