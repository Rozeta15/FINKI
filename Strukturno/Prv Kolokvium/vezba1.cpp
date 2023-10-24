#include<iostream>

using namespace std;

int main() {
    int broj;
    cin >> broj;
    cout << " otstrani posledna cifra " << (broj / 10) << endl;
    cout << " ispecati posledna cifra " << (broj % 10) << endl;


    return 0;
}
