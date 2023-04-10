#include <iostream>
#include <string>
using namespace std;

int main() {
    //Comando de abertura para repetição
    char continuar;
    do {
         //Variáveis que representam o nome e o R.A. do aluno
        string nome;
        int ra;
//variaveis que representam as notas do aluno nas avaliações ac1, ac2 e af
   double ac1, ac2, af, ag;
       //Exibe a mensagem na tela para digitar o nome e lê a mensagem do usuário e armazena a variável correspondente
        cout << "Digite o nome do aluno >>> ";
        cin >> nome;
        
        //Exibe a mensagem na tela para digitar o R.A. do aluno e lê a mensagem do usuário e armazena a variável correspondente
        cout << "Digite o R.A. do aluno (6 dígitos) >>> ";
        cin >> ra;
//aqui exibe a mensagem na tela para digitar a primeira nota
   cout << "Digite sua primeira nota do semestre >>> ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> ac1;
//aqui exibe a mensagem na tela para digitar a segunda nota
   cout << "Digite a sua segunda nota do semestre >>> ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> ac2;
//aqui exibe a mensagem na tela para digitar a terceira nota
   cout << "Digite a sua terceira nota do semestre ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> af;
   //aqui exibe a mensagem na tela para digitar a primeira nota
   cout << "Digite a nota da avaliação geral >>> ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> ag;
   
//aplicação de formula para calcular a média. O peso de AC1 é 15%
   ac1 = (ac1 * 0.15);
//aplicação de formula para calcular a média. O peso de AC2 é 35%
   ac2 = (ac2 * 0.35);
//aplicação de formula para calcular a média. O peso de AF é 40%
   af = (af * 0.4);
   //aplicação de formula para calcular a média. O peso de AG é 10%
   ag = (af * 0.1);
   
//calculo da soma das notas
   double soma = (ac1 + ac2 + af + ag);
    //Exibe o resultado da média do aluno na tela
        cout << "A média do aluno " << nome << " (R.A. " << ra << ") é: " << soma << endl << endl;
        
        //Se a nota do aluno foi maior ou igual a 5 ele é aprovado
        if(soma >= 5){
            //Exibe a mensagem na tela que foi aprovado com uma nota de 5 ou mais que 5
            cout << "Parabéns! " << nome << " (R.A. " << ra << ") foi aprovado! " << endl;
        }
   
//o resultado da média do aluno na tela
   cout << " A sua media do semestre foi: " << soma << endl << endl;

//se a nota do aluno foi maior ou igual a 5 ele é aprovado
   if(soma >= 5){
//aparece a mensagem na tela que foi aprovado com uma nota de 5 ou mais que 5
       cout << "Parabéns! Você foi aprovado! " << endl;
//caso a nota seja menor que 5, o aluno é reprovado
   }else{
//aparece a mensagem na tela indicando que foi reprovado
       cout << "Eita! Você foi reprovado!" << endl;
       
   }
  // perguntando ao usuário se deseja continuar
    cout << "Deseja continuar? (s/n) ";
    cin >> continuar;
} while (continuar == 's' || continuar == 'S');
   return 0;
}