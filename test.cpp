#include <iostream>
#include <bitset>
#include <string>
#include <vector>

int main() {
    std::string source = "hello world";
    std::vector<int> bits;
    for (unsigned char c : source) {
        std::bitset<8> bit(c);
        for (int i = 0; i < 8; ++i) {
            bits.push_back(bit[i]);
        }
    }
    return 0;
}
