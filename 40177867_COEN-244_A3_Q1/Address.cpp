#include "Address.h"

// Constructor

Address::Address() : name(""), streetAddress(""), municipality(""), region(""), code(""){}
Address::Address(
	std::string newName,
	std::string newStreetAddress,
	std::string newMunicipality,
	std::string newRegion,
	std::string newCode)
	:
	name(newName),
	streetAddress(newStreetAddress),
	municipality(newMunicipality),
	region(newRegion),
	code(newCode)
{}
Address::Address(const Address& newAddress)
	:
	name(newAddress.name),
	streetAddress(newAddress.streetAddress),
	municipality(newAddress.municipality),
	region(newAddress.region),
	code(newAddress.code) 
{}


// Setters

void Address::setName(const std::string& newName) { name = newName; }
void Address::setStreetAddress(const std::string& newStreetAddress) { streetAddress = newStreetAddress; }
void Address::setMunicipality(const std::string& newMunicipality) { municipality = newMunicipality; }
void Address::setRegion(const std::string& newRegion) { region = newRegion; }
void Address::setCode(const std::string& newCode) { code = newCode; }

// Getters

std::string Address::getName() const { return name; }
std::string Address::getStreetAddress() const { return streetAddress; }
std::string	Address::getMunicipality() const { return municipality; }
std::string	Address::getRegion() const{ return region;}
std::string	Address::getCode() const { return code; }

// Method

std::string Address::getInfo() const {
	std::ostringstream output;
	output << name << "\n"
		<< streetAddress << "\n"
		<< municipality << ", " << region << "\n"
		<< code << "\n";
	return output.str();
}