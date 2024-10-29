#include <iostream>
#include "TemplateCipher.h"
int main() {
    Cipher& cipher = *new TemplateCipher();
    std::string text;
    std::cout << "Enter the plaintext: ";
    std::cin >> text;
    std::string encryptedText = cipher.Encrypt(text);
    std::cout << "Ciphertext: " << encryptedText << std::endl;
    std::string decryptedText = cipher.Decrypt(encryptedText);
    std::cout << "Decrypted text: " << decryptedText << std::endl;
    return 0;
}