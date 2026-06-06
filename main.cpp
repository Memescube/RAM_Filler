#include <iostream>
using namespace std;

int main() {

    cout << "Enter how much RAM you'd like to fill (in MB):" << endl;

    long long ram;
    cin >> ram;
    ram = ram*131000;
    long long* buffer = new long long[ram];

    cout << "Filling RAM, this takes some seconds..." << endl;

    for (long i=0; i<ram; i++) buffer[i] = i;

    cout << endl;
    cout << "Done!" << endl;
    cout << "Press Enter to free filled RAM..." << endl;
    cin.ignore();
    cin.get();
    delete[] buffer;

    return 0;
}