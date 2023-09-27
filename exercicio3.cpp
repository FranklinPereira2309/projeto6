#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch1, ch2, ch3;
    


    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    /*cout << "Digite o segundo caractere: ";
    cin >> ch2;*/

    ch3 =  ch1 -1;

    if(ch3 <= 32 || ch3 == 127) {
        cout << "_" << ch3 <<  endl;

    }else {
        cout << ch3 << endl;
    }


    return 0;
}