#include <iostream>
using namespace std;

int main() {
    int num; // declara uma variavel

    cout << "Digite um numero inteiro positivo: "; // pede uma informacao ao usuario
    cin >> num; // atribui a informacao recebida do usuario a variavel
    
    cout << "Os primeiros " << num << " numeros pares são: "; // imprime a resposta para o usuario com base no comando "for"
    
    for (int i = 2; i <= num * 2; i += 2) { 
        cout << i << " "; // se utiliza de tres parametros para determinar os valores pedidos, quanto repetir e quando parar o programa. o primeiro parametro atribui um valor a variavel, o segundo determina quantas respostas vao ser geradas e o terceiro atualiza o valor a cada passo, para que nao haja valores repetidos
    }

    return 0;
}