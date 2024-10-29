#include <iostream>
#include <string>
#include "RLE.h"
int main() {
	std::string text;
	std::cout << "Enter a string to encode: ";
	std::cin >> text;
	ZIP& zipper = *new RLE();
	std::string zipped = zipper.Zip(text);
	std::cout << "Zipped string: ";
	for (char c : zipped)
		std::cout << c;
	std::cout << std::endl;
	std::string unzipped = zipper.Unzip(zipped);
	std::cout << "Unzipped string: " << unzipped << std::endl;
	std::cout << "Inputed length: " << text.length() << std::endl;
	std::cout << "Zipped length: " << zipped.length() << std::endl;
	std::cout << "Unzipped length: " << unzipped.length() << std::endl;
	return 0;
}