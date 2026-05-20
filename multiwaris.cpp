#include <iostream>
using namespace std;

class orang{
public:
    int umur;
    orang(int pUmur)  : umur(pUmur)
    {
        cout << "Objek orang dibuat dengan umur: " << umur << "\n" << endl;
    }
};

class perkerja : virtual public orang{
public:
    perkerja(int umur) : orang(umur) {
        cout << "pekerja dibuat\n" << endl;
    }
};

class pelajar : virtual public orang{
public:    pelajar(int umur) : orang(umur) {
        cout << "pelajar dibuat\n" << endl;
    }
};

class budi : public perkerja, public pelajar{
public:
    budi(int umur) : 
    orang(umur), 
    perkerja(umur), 
    pelajar(umur) {
        cout << "Objek budi dibuat\n" << endl;
    }
};

int main(){
    budi a(12);
    
    return 0;
}