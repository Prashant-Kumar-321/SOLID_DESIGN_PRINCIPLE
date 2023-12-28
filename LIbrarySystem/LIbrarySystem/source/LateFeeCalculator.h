#pragma once 
#include<list>
#include "LateFeeCalculatable.h"


class LateFeeCalculator
{
public:
	/*
	* Logic of evaluating the late fee 
	*/

	double calculateTotalLateFees(const std::list<RefLateFeeCalculatable>& items, int days) {
		double totalLateFee = 0; 
		for (RefLateFeeCalculatable item : items) {
			totalLateFee += item.get().calculateLateFee(days);
		}

		return totalLateFee ; 
	}
};
