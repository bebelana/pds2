#include <iostream>
#include "Estudante.hpp"
#include <string>
#include <iomanip> 

using namespace std;

int main() {
  int i, j;
  string nome;
  int matricula;
  float notas[5];
  Estudante est[10];
  float RSG[10];
  cout.precision(5);
  float top3[3] = {0,0,0};
  int ind3[3] = {0,0,0};

  for(i=0; i<10; i++){
    cin >> matricula >> nome >> notas[0] >> notas[1] >> notas[2]>> notas[3] >> notas[4];
    
    est[i].matricula = matricula;
    est[i].nome = nome;   
    est[i].notas[0] = notas[0];
    est[i].notas[1] = notas[1];
    est[i].notas[2] = notas[2];
    est[i].notas[3] = notas[3];
    est[i].notas[4] = notas[4];

    RSG[i] = est[i].calcularRSG();

    if(RSG[i] > top3[0]){
      top3[2] = top3[1];
      top3[1] = top3[0];
      top3[0] = RSG[i];

      ind3[2] = ind3[1];
      ind3[1] = ind3[0];
      ind3[0] = i;
    }
    else if(RSG[i] > top3[1]){
      top3[2] = top3[1];
      top3[1] = RSG[i];

      ind3[2] = ind3[1];
      ind3[1] = i;
    }
    else if(RSG[i] > top3[2]){
      top3[2] = RSG[i];
      
      ind3[2] = i;
    }
  }
  
  cout << est[ind3[0]].matricula << " " << est[ind3[0]].nome << " ";
  printf ("%.2f", RSG[ind3[0]]);
  cout << "\n";
  cout << est[ind3[1]].matricula << " " << est[ind3[1]].nome << " ";
  printf ("%.2f", RSG[ind3[1]]);
  cout << "\n";
  cout << est[ind3[2]].matricula << " " << est[ind3[2]].nome << " ";
  printf ("%.2f", RSG[ind3[2]]);
  cout << "\n";
  return 0;
}
