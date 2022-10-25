#include <iostream>

std::string encrypt_caesar(std::string stri, int smesh) {
    std::string encrypted;
    for (int i = 0; i < stri.length(); i++) {
        if (stri[i] != 32) {
            stri[i] += smesh;
            if (stri[i] >= 123) {
                stri[i] = stri[i] - 122 + 96;
            }if (stri[i] <= 96) {
                stri[i] = stri[i] - 97 + 123;
            }
        }
    }
    return stri;
}

std::string descrypt_caesar(std::string desstri, int dessmesh) {

    return encrypt_caesar(desstri, dessmesh * -1);
}


int main()
{
    std::string a = "The quick brown fox jumps over the lazy dog ";
    //std::cin >> a ;
    int b;
    std::cin >> b;
    std::string encra = encrypt_caesar(a, b);
    std::cout << encra << descrypt_caesar(encra, b);

}