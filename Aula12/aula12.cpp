#include <iostream>
using namespace std;

int main() {

    int num;

    /*
    1 2 3 4 5 6 7 8 9 10
    <3 e >8
    10 a 14
    16 a 19
    !
    */

    num=7;
    if((num >=3 && num < 6) || 
       (num > 9 && num < 15) || 
       (num > 15 && num < 20) ) {
        cout << "\n\nValor aceito\n";
    } else {
        cout << "\n\nNao aceito\n";
    }

    return 0;
}