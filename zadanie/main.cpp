#include <iostream>
#include <cstdint>

using namespace std;

int getbit(uint8_t a, int pos) {
    return (a >> pos) & 1;
}

void setbit(uint8_t &a, int pos, int val) {
    if (val == 1) {
        a |= (1 << pos);
    } else {
        a &= ~(1 << pos);
    }
}

int main() {
    uint8_t a = 4;

    setbit(a, 0, 1);

    cout << getbit(a, 0) << endl;
    cout << (int)a << endl;

    return 0;
}
