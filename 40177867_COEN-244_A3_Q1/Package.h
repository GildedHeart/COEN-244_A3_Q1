#pragma once
#include "Address.h"
#include <array>

class Package
{
protected:
	Address* toFrom;

	double weightInOz;
	double costPerOz;

public:

	// Constructors & destructor

	Package(
		double newWIOz = 0,
		double newCPOz = 0) 
	{}
	virtual ~Package();

	// Setters

	void setWeightInOz(const double);
	void setCostPerOz(const double);

	// Getters

	double getWeightInOz() const;
	double getCostPerOz()	const;

	// Methods

	virtual double calculateCost();

};

