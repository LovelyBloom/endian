// figure out cpu's endian

#include <iostream>
#include <bit>

using namespace std;

int main() {
    auto endian = std::endian::native;
    if (endian == std::endian::little) {
        cout << "it is little endian" << endl;
    } else {
        cout << "it is big endian" << endl;
    }
    return 0;
}
