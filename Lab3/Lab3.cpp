#include "CesarCipher.h"
#include <iostream>
int main() {
    std::string text;
    int shift;
    std::cout << "Enter Text: ";
    std::cin >> text;
    std::cout << "Enter shift value: ";
    std::cin >> shift;
    Cipher& c = *new CesarCipher(shift);
    std::string encryptedText = c.Encrypt(text);
    std::cout << "Encrypted text: " << encryptedText << std::endl;
    std::string decryptedText = c.Decrypt(encryptedText);
    std::cout << "Decrypted text: " << decryptedText << std::endl;
    delete& c;
    return 0;
}