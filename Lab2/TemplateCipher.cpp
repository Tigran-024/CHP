#include "TemplateCipher.h"
char* TemplateCipher::Encrypt(const std::string& text) 
{
	char* result = new char[text.length()];
	for (int i = 0; i < text.length(); i++)
		*(result + i) = this->arr2[(int)text[i]];
	return result;
}
char* TemplateCipher::Decrypt(const std::string& cipher) 
{
	char* result = new char[cipher.length()];
	for (int i = 00; i < cipher.length(); i++)
		*(result + i) = arr1[FindIndex(cipher[i])];
	return result;
}
int TemplateCipher::FindIndex(char symbol) const
{
	int i = 0;
	while (arr2[i] != symbol)
		i++;
	return i;
}
TemplateCipher::TemplateCipher()
{
	arr1 = new char[len];
	arr2 = new char[len];
	for (int i = 0; i < len; i++)
	{
		arr1[i] = (char)i;
		arr2[i] = (char)(len - i);
	}
}