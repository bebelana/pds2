#include "Estudante.hpp"
#include <iostream>

float Estudante::calcularRSG(){
  int i;
  double RSG=0;
  for(i=0; i<5; i++){
    RSG += notas[i];
  }
  return RSG/5;
}
