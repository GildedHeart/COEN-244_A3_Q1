#pragma once
#include "Package.h"
class OvernightPackage :
    public Package
{
protected:

	double extraPerOz;

public:

	// Constructors & destructor

	OvernightPackage(double newWIOz = 0.01, double newCPOz = 0.01, double newEPOz = 0.00);
	virtual ~OvernightPackage() override;

	// Setter

	void setExtraPerOz(const double);

	// Getter

	double getExtraPerOz() const;

	// Methods

	virtual double calculateCost() const final override;
};

