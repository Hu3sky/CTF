#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    string t = "Temporal Reverse Engineering";
    string s = "\x42\x01\x47\x15\x51\x19\x6F\x23\x45\x79\x40\x08\x48\x08\x75\x11\x73\x47\x60\x0c\x64\x0c\x6e\x14\x42\x06\x72\x1b\x6e\x38\x68\x14\x60\x12\x6d\x07\x45\x44\x63\x13\x66\x01\x68\x1a\x66\x56\x68\x1b\x69\x2e\x78\x08\x60\x1e\x68\x0c\x48\x3b\x72\x1a\x73\x05\x6c\x07\x6f\x55\x60\x12\x68\x09\x6f\x09";

    for(int i = 0; i < s.size() - 1; i += 2) {
        s[i] ^= 0x01;
        s[i + 1] ^= (t[ i % t.size()] + 1);
    }
    cout << s << endl;
    return 0;
}


