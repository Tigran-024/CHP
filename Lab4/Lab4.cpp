#include <iostream>
#include "RowColumnCipher.h"
int main()
{
    std::string text;
    std::cout << "Enter the text to encrypt: ";
    std::cin >> text;
    Cipher& c = *new RowColumCipher();
    std::string encryptedText = c.Encrypt(text);
    std::cout << "Encrypted text: " << encryptedText << std::endl;
    std::string decryptedText = c.Decrypt(encryptedText);
    std::cout << "Decrypted text: " << decryptedText << std::endl;
    delete& c;
    return 0;
}