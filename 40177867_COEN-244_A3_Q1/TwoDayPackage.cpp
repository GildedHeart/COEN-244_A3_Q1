#include "TwoDayPackage.h"

// Constructors & destructor

TwoDayPackage::TwoDayPackage(double newWIOz, double newCPOz) : Package(newWIOz, newCPOz) {}
TwoDayPackage::~TwoDayPackage() {}

// Methods

double TwoDayPackage::calculateCost() const {
	return (weightInOz * costPerOz) + flatFee;
}