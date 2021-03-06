/* 

Method:
	float roundDigit(float num, int digit)
======================================================
Author:
	Michael Vogelsong
	4/12/13
======================================================
Library Dependencies:
	NONE
======================================================
Function: 
	rounds num on a particular digit
======================================================
Parameters:    
	num: (float) number to be rounded
	digit: (int) desired least significant digit (decimal)
		e.g. If we want to round to the nearest hundredth in decimal,
			we use "digit = -2" because 10^(-2) == 1/100;
	base: (int) base
		e.g 2 (bin), 10 (dec), 16 (hex), etc.
======================================================
Returns:
	(float) rounded number
======================================================
Calls:
	NONE
======================================================
Called by:
	void displayTemp(float currentTemp, int setPoint)
======================================================
Other Notes:
	NONE

*/

float roundDigit(float num, int digit)
{
	float factor = num*(base^(-1*digit));
	num = round(num*factor);
	return (num/factor);
}