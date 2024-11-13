#pragma once
#include "Address.h"
#include <array>
#include <stdexcept>
#include <iomanip>
#include <sstream>

class Package
{
protected:
	Address* toFrom;

	double weightInOz;
	double costPerOz;

public:

	// Constructors & destructor

	Package(double newWIOz = 0.01, double newCPOz = 0.01);
	virtual ~Package();

	// Setters

	void setWeightInOz(const double);
	void setCostPerOz(const double);


	// Getters

	double getWeightInOz() const;
	double getCostPerOz() const;

	// Methods

	virtual double calculateCost() const;
	void setToFrom(int, const std::string, const std::string, const std::string, const std::string, const std::string);
	std::string getToFrom(int) const;

};

