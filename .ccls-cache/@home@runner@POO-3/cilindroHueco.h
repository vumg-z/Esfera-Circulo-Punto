#ifndef CILINDROHUECO_H
#define CILINDROHUECO_H

#include "circulo.h"
#include "math.h"

class CilindroHueco {
private:
  Circulo circulo;
  Circulo circuloInterno;
  int altura;

public:
  CilindroHueco(int r, int rInterno) {
    // x/y están inicializadas a 0 porque son inutiles
    this->circulo = Circulo(r, 0, 0);
    this->circuloInterno = Circulo(rInterno, 0, 0);
  }

  float getArea() {
    return 2 * 3.1416 *
               (pow(circulo.getRadio(), 2) -
                pow(circuloInterno.getRadio(), 2)) +
           2 * M_PI * circulo.getRadio() * altura * circuloInterno.getRadio();
  }

  float getVolumen() {
    return M_PI * (pow(circulo.getRadio(), 2) -
                   pow(circuloInterno.getRadio(), 2) * altura);
  }
};

#endif