#ifndef LIST_H
#define LIST_H

struct Circunferencia {
  double xc;
  double yc;
  double raio;
  
  Circunferencia(double x, double y, double r);
  double calcularArea();
  bool possuiIntersecao(Circunferencia* c) ;
};

#endif
