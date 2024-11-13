#include "Address.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include "Utility.h"
#include <iostream>
#include <iomanip>
#include <string>

void testStaticBinding();
void testDynamicBinding();

int main() {
	std::cout << "**********Static Binding Test**********";
	testStaticBinding();

	std::cout << "**********Dynamic Binding Test**********";
	testDynamicBinding();
	return 0;
}

void testStaticBinding() {
	charLine();

	Address address1 ("John Doe", "4351 Milenium Drive", "Toronto", "Ontario", "A1A 1A1");
	
	std::cout << address1.getInfo();

	charLine();

	Package package1(4.5, 2.0);
	package1.setToFrom(0, "John Doe", "4352 Milenium Drive", "Toronto", "Ontario", "A1A 1A1");
	package1.setToFrom(1, "Jane Doe", "230 Falcon Road", "Boston", "Massachusetts", "01234");

	std::cout << std::fixed << std::setprecision(2)
		<< package1.getToFrom(0)
		<< package1.getToFrom(1)
		<< "Shipping cost is: $" << package1.calculateCost();

	charLine();

	TwoDayPackage twoDayPackage1(5.5, 3.0);
	twoDayPackage1.setToFrom(0, "John Doe", "4352 Milenium Drive", "Toronto", "Ontario", "A1A 1A1");
	twoDayPackage1.setToFrom(1, "Jane Doe", "230 Falcon Road", "Boston", "Massachusetts", "01234");

	std::cout << std::fixed << std::setprecision(2)
		<< twoDayPackage1.getToFrom(0)
		<< twoDayPackage1.getToFrom(1)
		<< "Shipping cost is: $" << twoDayPackage1.calculateCost();

	charLine();

	OvernightPackage overnightPackage1(8.0, 3.5, 1.5);
	overnightPackage1.setToFrom(0, "John Doe", "4352 Milenium Drive", "Toronto", "Ontario", "A1A 1A1");
	overnightPackage1.setToFrom(1, "Jane Doe", "230 Falcon Road", "Boston", "Massachusetts", "01234");

	std::cout << std::fixed << std::setprecision(2)
		<< overnightPackage1.getToFrom(0)
		<< overnightPackage1.getToFrom(1)
		<< "Shipping cost is: $" << overnightPackage1.calculateCost();

	charLine();
}

void testDynamicBinding() {
	
	double weight = 1.0;
	double cost = 1.0;
	double extraCost = 0.5;
	double totalCost = 0.0;

	Package* packagePtr[10];

	for (int i = 0; i < 10; i++) {

		charLine();

		if(i<5){
			packagePtr[i] = new TwoDayPackage(weight + static_cast<double>(i), cost + static_cast<double>(i));
		}
		else{ 
			packagePtr[i] = new OvernightPackage(weight + static_cast<double>(i), cost + static_cast<double>(i), extraCost + (static_cast<double>(i) / 2));
		}

		packagePtr[i]->setToFrom(0, "John Doe", "4352 Milenium Drive", "Toronto", "Ontario", "A1A 1A1");
		packagePtr[i]->setToFrom(1, "Jane Doe", "230 Falcon Road", "Boston", "Massachusetts", "01234");

		std::cout << std::fixed << std::setprecision(2)
			<< packagePtr[i]->getToFrom(0)
			<< packagePtr[i]->getToFrom(1)
			<< "Shipping cost is: $" << packagePtr[i]->calculateCost();

		totalCost += packagePtr[i]->calculateCost();
	}

	charLine();

	std::cout << "The total coast of all the packages is: &" << totalCost;

	charLine();

}