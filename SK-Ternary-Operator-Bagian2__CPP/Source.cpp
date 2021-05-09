#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int umur = 0;

    cout << "Masukan umur anda : "; cin >> umur;
    cout << "Umur anda " << (umur > 24 ? ">" : "<") << " 24 " << endl;

    _getch();
    return 0;
}