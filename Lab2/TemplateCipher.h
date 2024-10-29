#pragma once
#include "Cipher.h"
class TemplateCipher :
	public Cipher
{
private:
	char* arr1;
	char* arr2;
	const int len = 255;
	int FindIndex(char symbol) const;
public:
	TemplateCipher();
	char* Encrypt(const std::string& text) override;
	char* Decrypt(const std::string& cipher) override;
};

