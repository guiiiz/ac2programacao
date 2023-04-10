//Biblioteca escolhida
#include <iostream>
using namespace std;
//Comando de abertura do programa
int main() 
{
    //Variavel, tipo de variavel inteiro e valor de variavel 3
   int Var = 3;
   //Indicação de ponteiro
   int* pVar;
   //Indicação do valor da variavel
   pVar = &Var;
   
   //Puxando o endereço de memória
   cout<<Var<<endl;
   cout<<*pVar<<endl;
   cout<<pVar<<endl;
}