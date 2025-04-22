#include <iostream>
using namespace std;

int main()
{

    int num1=10;
    int num2=50;
    
    char opc='s';
/* 
     if - se(teste logico) 
    {
        Se o teste for verdadeiro
    } else - se não / caso contrário 
     {
        Se o teste for falso
    }
*/
// >, <, >=, <=, ==, !=
// 10 < 5 = false
// 50 > 25 = true
// 100 > (50*2) = false
// 100 >= (50*2) = true
// num < 10 = true

if (num1 > num2) 
{
    cout << "Resultado VERDADEIRO";
} 
else 

{
    cout << "Resultado Falso";
}

    return 0;
}