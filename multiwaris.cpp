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



