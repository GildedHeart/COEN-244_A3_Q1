#pragma once
#include "Package.h"
class TwoDayPackage :
    public Package
{
private: 

    const double flatFee = 15.5;

public:

	// Constructors & destructor

	TwoDayPackage(double newWIOz = 0.01, double newCPOz = 0.01);
	virtual ~TwoDayPackage() override;

	// Methods

	double calculateCost() const final;

};

