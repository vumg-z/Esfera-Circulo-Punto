#ifndef CILINDRO_H
#define CILINDRO_H

#include "circulo.h"

class Cilindro {
private:
  Circulo circulo;
  int altura;

public:
  Cilindro(int radio, int x, int y, int altura) {
    this->circulo = Circulo(radio, x, y);
    this->altura = altura;
  }

  float getPerimetro() { return circulo.getRadio() * 2 * 3.1416; }

  float getArea() {
    return (2 * 3.1416 * circulo.getRadio() * altura) +
           (2 * 3.1416 * (circulo.getRadio() * circulo.getRadio()));
  }

  float getVolumen() {
    return 3.1416 * (circulo.getRadio() * circulo.getRadio()) * altura;
  }
};

#endif // circulo H