#include<iostream>
using namespace std;

int main() {
    cout << "seja bem vindo a calculadora simples v1!" << endl;

    cout << "qual operaçao deseja? +, -, *, /" << endl;
    string operacao;
    cin >> operacao;

    cout << "digite o primeiro numero: " << endl;
    int numero1;
    cin >> numero1;

    cout << "digite o segundo numero: " << endl;
    int numero2;
    cin >> numero2;

    // validação
    if (operacao == "/" && numero2 == 0 ) {
        cout << "impossivel dividir por 0!" << endl;
        return 1;
    }

    cout << "o resultado é: " << endl;
    if (operacao == "+") {
        cout << numero1 + numero2 << endl;
    } else if (operacao == "-") {
        cout << numero1 - numero2 << endl;
    } else if (operacao == "*") {
        cout << numero1 * numero2 <<  endl;
    } else {
        cout << numero1 / numero2 << endl;
    }

    return 0;
}