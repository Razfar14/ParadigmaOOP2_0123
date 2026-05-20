#include <iostream>
using namespace std;

class AbstraksiKlass{
private:
    string x, y;

public:
    //metod untuk mengisi nilai
    // private member
    void setXY(string a, string b){
        x = a;
        y = b;
    }
    //meanmpilkan nilai
    void display(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

