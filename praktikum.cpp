#include <iostream>
using namespace std;

class RekeningBank {
protected:
    int saldo;
public:
    RekeningBank(int saldo_awal) : saldo(saldo_awal) {}
    
    virtual void potongAdmin() = 0; 
    
    int getSaldo() const {
        return saldo;
    }
};

class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(int saldo_awal) : RekeningBank(saldo_awal) {}
    
    void potongAdmin() override {
        cout << "Rekening Syariah: Tidak ada potongan biaya admin. Saldo tetap: Rp " << saldo << endl;
    }
};

class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(int saldo_awal) : RekeningBank(saldo_awal) {}
    
    void potongAdmin() override {
        saldo -= 15000;
        cout << "Rekening Konvensional: Potongan admin Rp 15000. Saldo saat ini: Rp " << saldo << endl;
    }
};

class RekeningPremium : public RekeningBank {
public:
    RekeningPremium(int saldo_awal) : RekeningBank(saldo_awal) {}
    
    void potongAdmin() override {
        if (saldo > 10000000) {
            cout << "Rekening Premium: Saldo di atas Rp 10.000.000, bebas biaya admin. Saldo tetap: Rp " << saldo << endl;
        } else {
            saldo -= 50000;
            cout << "Rekening Premium: Saldo <= Rp 10.000.000, potongan admin Rp 50000. Saldo saat ini: Rp " << saldo << endl;
        }
    }
};

int main() {
    RekeningBank* rekening[4];
    
    rekening[0] = new RekeningSyariah(5000000);
    rekening[1] = new RekeningKonvensional(5000000);
    rekening[2] = new RekeningPremium(15000000);
    rekening[3] = new RekeningPremium(5000000);
    
    cout << "--- Proses Bank Gibran Jaya ---" << endl;
    for (int i = 0; i < 4; i++) {
        rekening[i]->potongAdmin();
    }
    
    for (int i = 0; i < 4; i++) {
        delete rekening[i];
    }
    
    return 0;
}