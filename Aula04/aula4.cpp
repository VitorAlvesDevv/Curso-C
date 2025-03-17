#include <iostream>
using namespace std;

int main() {
    // =: Atribuição
    // Devemos indicar o TIPO, NOME; DA VARIAVEL
    // TIPO NOME = VALOR;

    int vidas=0; // Variavel do tipo inteira: 10, 25 e -5
    char letra='B'; // 'B'  
   // char letras[20]; // criando um vetor[] consigo receber palavras com char
    double decimal=5.2; // 2.49999 - 43.5
    float decimal2=5.2; // 2.5
    bool vivo=true; // true = verdadeiro / false = falso
    string nome="Vitor"; // "Vitor"
    
    cout << "Digite o numero de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Dinheiro: ";
    cin >> decimal;

    cout << "Digite seu nome: ";
    cin >> nome;

    vidas=100;

    cout << "\nVidas: ";
    cout << vidas << "\nLetras: ";
    cout << letra << "\nDinheiro: ";
    cout << decimal << "\nVivo: ";
    //cout << decimal2 << "\n";
    cout << vivo << "\nNome: ";
    cout << nome << "\n";

    return 0;
}