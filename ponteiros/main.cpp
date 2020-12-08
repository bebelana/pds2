#include <iostream>

#define SIZE 5

using namespace std;
int main(){
  long value1 = 200000;
  long value2;

  long * long_ptr;

  long_ptr = &value1;

  //imprima o valor do objeto apontado por long_ptr
  cout << *long_ptr << " ";

  value2 = *long_ptr;
  //Imprima o valor de value2
  cout << value2 << " ";

  //Imprima o endereço de value1
  cout << &value1 << " ";

  //Imprima o endereço armazenado em long_ptr
  cout << &long_ptr << " ";
    
  //Imprima a comparação entre o endereço de value1 com o endereço armazenado em long_ptr
  cout << (&value1 == long_ptr) << " ";

  //imprimir os elementos do array values usando notação de array subscrito.
  unsigned int values[5] = {2,4,6,8,10};
  unsigned int *v_ptr;
  
  for(int i=0;i<5;i++){
    cout << i[values] <<" ";
  }

  //imprimir os elementos do array values usando notação de array ponteiro/deslocamento.
  v_ptr = &values[0];
  
  for(int i=1;i<=5;i++){
    cout << *v_ptr*i<< " ";
  }

  //imprimir os elementos do array values usando notação de array ponteiro/deslocamento com o nome de array como o ponteiro.
  for(int i=1;i<=5;i++){
    cout << *values*i << " ";
  }

  //imprimir os elementos do array values utilizando subscritos no ponteiro para o array.
  for(int i=0;i<5;i++){
    cout << *&values[i] << " ";
  }  

  //imprimir o quinto elemento de values utilizando a notação de subscrito de array,
  cout << values[4] << " ";

  //a notação de ponteiro/deslocamento com o nome de array como o ponteiro, 
  cout << *values*5 << " ";

  //a notação de subscrito de ponteiro,
  cout << 4[values] << " ";

  //a notação de ponteiro/deslocamento.
  cout << *v_ptr*5 << " ";

  //16. Mostre que endereço é referenciado por v_ptr + 3, e que valor é armazenado nessa localização.
  cout << v_ptr+4 << " ";    
  cout << *v_ptr*4 << " ";    

  //16. Mostre que endereço é referenciado por v_ptr + 3, e que valor é armazenado nessa localização.
  cout << v_ptr+1 << " ";    
  cout << *v_ptr*1 << " ";     

  return 0;
}
