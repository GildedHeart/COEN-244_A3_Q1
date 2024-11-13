#include "OvernightPackage.h"

// Constructors & destructor

OvernightPackage::OvernightPackage(double newWIOz, double newCPOz, double newEPOz) : Package(newWIOz, newCPOz), extraPerOz(newEPOz) {}
OvernightPackage::~OvernightPackage() {}

// Setter

void OvernightPackage::setExtraPerOz(const double newEPOz) { extraPerOz = newEPOz; }

// Getter

double OvernightPackage::getExtraPerOz() const { return extraPerOz; }

// Methods

double OvernightPackage::calculateCost() const {
	return (costPerOz + extraPerOz) * weightInOz;
}