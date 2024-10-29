#include "RLE.h"
RLE::RLE() {}
RLE::~RLE(){}
std::string RLE::Zip(const std::string& text) 
{
	std::string zipped = "";
	int len = text.length();
	for (int i = 0; i < len; ++i) 
	{
		char currentChar = text[i];
		int count = 1;
		while (i + 1 < len && text[i] == text[i + 1]) 
		{
			count++;
			i++;
		}
		while (count > 255) 
		{
			zipped += currentChar;
			zipped += (char)255;
			count -= 255;
		}
		zipped += currentChar;
		zipped += (char)count;
	}
	return zipped;
}
std::string RLE::Unzip(const std::string& zip) 
{
	std::string unzipped = "";
	int len = zip.length();
	for (int i = 0; i < len; i += 2) 
	{
		char currentChar = zip[i];
		int count = (unsigned char)zip[i + 1];
		unzipped.append(count, currentChar);
	}
	return unzipped;
}