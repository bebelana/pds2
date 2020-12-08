#include "Circunferencia.hpp"

#include "cmath"

  Circunferencia::Circunferencia(double x, double y, double r) {
    xc = x;
    yc = y;
    raio = r;    
  }

  double Circunferencia::calcularArea() {
    double A = 3.14*raio*raio;    
    return A;   
  } 

  bool Circunferencia::possuiIntersecao(Circunferencia* c) {
    double distancia = sqrt(pow((xc-c->xc),2)+ pow((yc - c->yc),2));

    return (distancia/2 <= raio || distancia/2 <= c->raio);   
  }
