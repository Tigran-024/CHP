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
static int Lcm(int firstNumber, int secondNumber) 
{
	if (firstNumber == 0 || secondNumber == 0)
		return 0;
	return std::abs(firstNumber * secondNumber) / Gcd(firstNumber, secondNumber);
}
int main() 
{
	int firstNumber;
	int secondNumber;
	std::cout << "Enter first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter second number: ";
	std::cin >> secondNumber;
	int result = Lcm(firstNumber, secondNumber);
	std::cout << "The least common multiple of " << firstNumber << " and " << secondNumber << " is " << result << std::endl;
	return 0;
}