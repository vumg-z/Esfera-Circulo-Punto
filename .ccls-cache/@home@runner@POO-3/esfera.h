#include "circulo.h"
#include <math.h>

class Esfera {
private:
  Circulo circulo;

public:
  Esfera(int radio, int x, int y) : circulo(radio, x, y) {}

  double getArea() { return 4 * M_PI * pow(circulo.getRadio(), 2); }
  
  double getVolumen() {
    return (4.0 / 3.0) * M_PI * pow(circulo.getRadio(), 3);
  }
};