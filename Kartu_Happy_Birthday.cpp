#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    string nama;
    int lahir, sekarang;
    getline(cin, nama);
    cin >> lahir >> sekarang;
    cout << "Selamat ulang tahun ke-" << sekarang - lahir << ", " << nama << "!!!";
    return 0;
}