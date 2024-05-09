//Implement a function that adds two numbers together and returns their sum in binary.The conversion can be done before, or after the addition.
//The binary number returned should be a string.
//Examples:(Input1, Input2-- > Output(explanation)))

//my decision

#include <cstdint>
#include <string>
#include <bitset>

using namespace std;

string add_binary(uint64_t a, uint64_t b) {
    auto sum = a + b;
    int significant_bits = (sum == 0) ? 1 : 64 - __builtin_clzll(sum);
    return bitset<64>(sum).to_string().substr(64 - significant_bits);
}