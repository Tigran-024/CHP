#include <iostream>
#include <cstdlib>
static int Gcd(int firstNumber, int secondNumber) 
{
	firstNumber = std::abs(firstNumber);
	secondNumber = std::abs(secondNumber);
	while (secondNumber != 0) 
	{
		int temp = secondNumber;
		secondNumber = firstNumber % secondNumber;
		firstNumber = temp;
	}
	return firstNumber;
}
int main() 
{
	int firstNumber;
    int secondNumber;
	std::cout << "Enter first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter second number: ";
	std::cin >> secondNumber;
	int result = Gcd(firstNumber, secondNumber);
	std::cout << "The greatest common divisor of " << firstNumber << " and " << secondNumber << " is " << result << std::endl;
	return 0;
}