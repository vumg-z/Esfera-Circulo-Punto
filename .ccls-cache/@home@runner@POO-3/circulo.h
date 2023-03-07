#ifndef CIRCULO_H
#define CIRCULO_H

#include "punto.h"
#include <iostream>
#include <math.h>

class Punto;

class Circulo {
private:
  int radio;
  Punto centro;

public:
  Circulo(int radio, int x, int y) {
    this->centro = Punto(x, y);
    this->radio = radio;
  }

  double getArea() { return M_PI * (radio * radio); }

  double getPerimetro() { return radio * 2 * M_PI; }

  int getRadio() { return radio; }

  int getCentroX() { return centro.getX(); }

  void despliegue() {
    cout << "Circulo con radio " << radio << " y centro en (" << centro.getX()
         << "," << centro.getY() << ")" << endl;
  }
};

#endif // circulo H