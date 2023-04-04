#include <iostream>
using namespace std;

int main() { // chave principal onde nosso codigo vai ser escrito
    int num; // cria a variavel int que iremos usar
    
    do { // codigo dentro de "do" eh executado desde que a condicao de "while" seja verdadeira
        cout << "Digite um numero entre 1 e 10: ";
        cin >> num;
    } while(num < 1 || num > 10); // atribui uma condicao para a funcao "do" ser executada
    
    cout << "Você digitou o numero " << num << "."; // mostra o numero digitado pelo usuario

    return 0;
}