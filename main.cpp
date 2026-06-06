#include <iostream>
using namespace std;

int main() {

    cout << "Warning: Allocating more RAM than currently available may cause severe system instability." << endl;
    cout << "To check available RAM, open Task Manager -> Performance -> Memory." << endl;
    cout << endl;
    cout << "Enter the amount of RAM to allocate (in MB): ";

    long long ram;
    cin >> ram;
    ram = ram*131000;
    long long* buffer = new long long[ram];

    cout << "Allocating RAM, this may take a few seconds..." << endl;

    for (long i=0; i<ram; i++) buffer[i] = i;

    cout << "Done!" << endl;
    cout << endl;
    cout << "Press Enter to free allocated RAM..." << endl;
    cin.ignore();
    cin.get();
    delete[] buffer;

    return 0;
}