#pragma once
#include <string>
class Cipher
{
public:
	virtual char* Encrypt(const std::string& text) = 0;
	virtual char* Decrypt(const std::string& cipher) = 0;
	virtual ~Cipher() = 0;
};
