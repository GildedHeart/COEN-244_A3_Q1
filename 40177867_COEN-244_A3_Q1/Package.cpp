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
	if (newWIOz <= 0.00) {
		throw std::invalid_argument("Package weight in ounces must be > 0.00oz.\n");
	}
	weightInOz = newWIOz;

	if (costPerOz <= 0.00) {
		throw std::invalid_argument("Shippig cost per ounce must be > $0.00/oz.\n");
	}
	costPerOz = newCPOz;
}

Package::~Package(){
	delete[] toFrom;
}

// Setters

void Package::setWeightInOz(const double newWIOz) {
	if (newWIOz <= 0.00) {
		throw std::invalid_argument("Package weight in ounces must be > 0.00oz.\n");
	}
	weightInOz = newWIOz;
}

void Package::setCostPerOz(const double newCPOz) {
	if (costPerOz <= 0.00) {
		throw std::invalid_argument("Shippig cost per ounce must be > $0.00/oz.\n");
	}
	costPerOz = newCPOz;
}

// Getters

double Package::getWeightInOz() const { return weightInOz; }
double Package::getCostPerOz()	const { return costPerOz; }

// Methods

double Package::calculateCost() const { return weightInOz * costPerOz;}

void Package::setToFrom(
	int i,
	const std::string newName,
	const std::string newStreetAddress,
	const std::string newMunicipality,
	const std::string newRegion,
	const std::string newCode) 
{
	toFrom[i].setName(newName);
	toFrom[i].setStreetAddress(newStreetAddress);
	toFrom[i].setMunicipality(newMunicipality);
	toFrom[i].setRegion(newRegion);
	toFrom[i].setCode(newCode);
}

std::string Package::getToFrom(int i) const {
	std::ostringstream output;
	switch (i) {
	case 0:
		output << "To:\n";
		break;
	case 1:
		output << "From:\n";
			break;
	}
	output << toFrom[i].getInfo() << std::endl;
	return output.str();
}