#include <iostream>
#include <string>
#include <cstdint>
// Non-licensing arithmetic test: verifies reproducible 64-bit modular arithmetic.
static uint64_t mulmod(uint64_t a,uint64_t b,uint64_t mod) {
    uint64_t result=0; a%=mod;
    while(b) { if(b&1) result=(result+a)%mod; a=(a+a)%mod; b>>=1; }
    return result;
}
int main() {
    bool ok=mulmod(17,19,97)==32;
    std::cout << "Independent license test lab - arithmetic self-test: " << (ok?"PASS":"FAIL") << "\n";
    std::cout << "No WinRAR activation keys are generated.\n";
    return ok?0:1;
}
