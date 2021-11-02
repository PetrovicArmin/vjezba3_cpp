#include <iostream>
#include <stack>
#include <string>

class MojaKlasa {
        int broj;
        std::string nazivNekoga;
    public:
    MojaKlasa() {}

    int getBroj() const {
        return broj;
    }

    void setBroj(int broj) {
        MojaKlasa::broj = broj;
    }

    const std::string &getNazivNekoga() const {
        return nazivNekoga;
    }

    void setNazivNekoga(const std::string &nazivNekoga) {
        MojaKlasa::nazivNekoga = nazivNekoga;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
