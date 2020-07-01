#include <iostream>
#include <cstdint>
#include <ctime>

using namespace std;

// generate a 32 bit key
int main() {
    srand(time(nullptr));
    // keylen is random from 1~14
    int keylen = rand()%14 + 1;
    cout<<keylen<<endl;

    for(int k=0; k<keylen;k++) {
        uint32_t key = 0;
        for (int i = 31; i >= 0; i--) {
            if (rand() % 2 == 1) {
                uint32_t temp = 1;
                // temp = 2^i
                for (int j = 0; j < i; j++) {
                    temp *= 2;
                }
                key += temp;
            }
        }
        cout << key << endl;
    }
    return 0;
}