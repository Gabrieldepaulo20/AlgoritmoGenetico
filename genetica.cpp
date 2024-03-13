#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main (){
    srand (time(0));
int a,b,c,d,e,f,x;
int repeticoes = 0;
int populacaoEscolhida = 0;
int populacao = 0;
int individuos {1000};

    cout << "Seja bem vindo ao sistema de genética" << endl;
    cout << "Por favor, digite quantas populações gostaria de gerar (10, 100 ou 1000): ";
    cin >> populacao;
    cout << "Quantas repeticoes deseja ao maximo?" "/n";
    cin >> repeticoes;

    if (populacao == 10) {
        cout << "Você escolheu a população de 10" << endl;
        populacaoEscolhida = populacao;
    } else if (populacao == 100) {
        cout << "Você escolheu a população de 100" << endl;
        populacaoEscolhida = populacao;
    } else if (populacao == 1000) {
        cout << "Você escolheu a população de 1000" << endl;
        populacaoEscolhida = populacao;
    } else {
        cout << "Opção inválida. Por favor, escolha entre 10, 100 ou 1000." << endl;
    exit(EXIT_FAILURE);
    }
   
for (int i = 0; i< repeticoes; i++){
    a*pow (x,5) + b*pow (x,4) + c*(x,3)+ d*pow (x,2) + e*x + f;
    int numero_aleatorio = rand() % (4001 - 2000);
cout << "Resultado da equação para x = " << x << ": " << numero_aleatorio << endl;}
return 0;
 }