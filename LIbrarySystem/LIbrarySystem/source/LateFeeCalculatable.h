#pragma once

/*
*	I -> Interface seggeregation 
*	No interface should have too many methods 
*	
*	To make LibraryItem thin and follow srp 
*	I took calcualteLateFee(int) out from LibrayItem and define seperate 
*	class for it. 
*/

class LateFeeCalculatable
{
public:
	virtual double calculateLateFee(int days) const noexcept = 0; 
};

/* Wrapper class for Reference of LateFeeCaculatable */

class RefLateFeeCalculatable
{
public:
	RefLateFeeCalculatable(LateFeeCalculatable& lfc) : lateFeeCalculatable(lfc) {  }
	RefLateFeeCalculatable(LateFeeCalculatable&& lfc) : lateFeeCalculatable(lfc) {  }

	LateFeeCalculatable& get() { return lateFeeCalculatable; }

private:
	LateFeeCalculatable& lateFeeCalculatable;
};