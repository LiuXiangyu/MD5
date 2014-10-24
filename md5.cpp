#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
#include <iomanip>
#include <bitset>
#include <vector>

class MD5 {
public:
    MD5(std::string str);
    setSource(std::string str);
    getResult();
private:
    std::string source;
    std::string result;
    process();
};

MD5::MD5(std::string str) : source(str) {}

MD5::setSource(std::string str) {
    source = str;
    process();
}

MD5::getResult() {
    return result;
}

MD5::process() {
    std::vector<int> bits;
    for (unsigned char c : source) {
        std::bitset<8> bit(c);
        for (int i = 0; i < 8; ++i) {
            bits.push_back(bit[i]);
        }
    }
}
