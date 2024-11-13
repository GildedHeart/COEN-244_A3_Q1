#pragma once
#include <string>
#include <sstream>

class Address
{
	private:

	std::string name; 
	std::string streetAddress; 
	std::string municipality; 
	std::string region; 
	std::string code; 

public:

	// Constructor

	Address();
	Address(
		std::string,
		std::string,
		std::string,
		std::string,
		std::string);
	Address(const Address& newAddress);

	// Setters

	void setName(const std::string&);
	void setStreetAddress(const std::string&);
	void setMunicipality(const std::string&);
	void setRegion(const std::string&);
	void setCode(const std::string&);

	// Getters

	std::string getName() const;
	std::string getStreetAddress() const;
	std::string	getMunicipality() const;
	std::string	getRegion() const;
	std::string	getCode() const;

	// Method

	std::string getInfo() const;
};

