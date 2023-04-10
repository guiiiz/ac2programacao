//Biblioteca escolhida
#include <iostream>
using namespace std;
//Comando de abertura do programa
int main() 
{
    //Declarando que meu ponteiro é um inteiro
  int *ptr = new int;
  //Valor do meu ponteiro
  *ptr = 7;
  
  //Puxando o endereço
  cout<< *ptr<<endl;
  cout<< ptr<<endl;
  //deletando meu ponteiro
  delete ptr;
  //Limpando espaço de memória para reutilizar
  ptr = nullptr;
  
  //Informação pós o delete do ponteiro
  cout<< *ptr<<endl;
  cout<< ptr<<endl;
}