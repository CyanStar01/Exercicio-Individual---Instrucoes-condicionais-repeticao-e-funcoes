#include <iostream>
using namespace std;

int main() {
    int num, i = 1; // declara as variaveis que utilizaremos
    
    cout << "Digite um numero inteiro positivo: "; // pede uma informacao do usuario
    cin >> num; // atribui a resposta do usuario como o valor da variavel "num"
    
    while(i <= num) { // funcao faz com sejam impressos numeros na tela, comecando do 1 (i), ate chegar no numero digitado pelo usuario (num)
        cout << i << " ";
        i++;
    }

    return 0;
}