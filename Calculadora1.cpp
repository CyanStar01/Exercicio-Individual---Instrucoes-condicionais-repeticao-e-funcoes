#include <iostream>
using namespace std;

int main() {
    char op; // cria uma variavel tipo char
    float num1, num2; // cria as variaveis tipo float que iremos utilizar
    
    cout << "Digite operador desejado (+, -, *, /): "; // pede uma informacao do usuario
    cin >> op; // registra a resposta do usuario como o valor de uma variavel
    cout << "Digite o Valor 1: "; // pede uma informacao do usuario
    cin >> num1; // registra a resposta do usuario como o valor de uma variavel
    cout << "Digite o Valor 2: "; // pede uma informacao do usuario
    cin >> num2; // registra a resposta do usuario como o valor de uma variavel
    
    switch(op) { // muda o tipo de operacao exibida ao usuario com base no operador digitado (+, -, *, /); ou avisa o usuario que foi digitado um operador invalido
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "O operador digitado nao foi reconhecido, por favor insira um operador valido";
            break;
        
    }

    return 0;
}
