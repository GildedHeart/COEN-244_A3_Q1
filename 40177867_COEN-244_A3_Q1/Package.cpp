#include "Package.h"

// Constructors & destructor

Package::Package(
	double newWIOz,
	double newCPOz)
	:
	weightInOz(newWIOz),
	costPerOz(newCPOz)
{
	toFrom = new Address[2]();
}

Package::~Package(){
	delete[] toFrom;
}

// Setters

void Package::setWeightInOz(const double newWIOz) { weightInOz = newWIOz; }
void Package::setCostPerOz(const double newCPOz) { costPerOz = newCPOz; }

// Getters

double Package::getWeightInOz() const { return weightInOz; }
double Package::getCostPerOz()	const { return costPerOz; }

// Methods


double Package::calculateCost(){ return weightInOz * costPerOz;}