#include <iostream>

int main() {
	double k;
	double mi;

	std::cout << "Enter number in Kilometers to convert to Miles: ";
	std::cin >> k;

	mi = k * 0.621;

	std::cout << mi << " miles.";
	return 0;
}