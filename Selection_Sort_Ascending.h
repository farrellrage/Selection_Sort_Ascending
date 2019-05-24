//------------------------------------------------------------------------------
//Programmer:		Austin M Farrell
//Selection Sort
//	Selection sort makes a number of passes through the array for each element
//	in the array.
//	Every pass begins 
//------------------------------------------------------------------------------
#ifndef Selection_Sort_Ascending_h
#define Selection_Sort_Ascending_h

#include "Main.h"
#include "Standard_Helper_Functions.h"

template <typename type>
void SelectionSortAscending(type data[], int length)
{
	int smallestIndex;
	type temp;

	/*
	For each element in the array
	*/
	for (int pass = 0; pass < (length - 1); pass++)
	{
		/*
		Save the index of the smallest element as the first element in
		this pass
		*/
		smallestIndex = pass;

		/*
		For each element in the array in the current pass
		*/
		for (int elem = (pass + 1); elem < length; elem++)
		{
			/*
			Determine whether the current element is smaller than the
			recorded smallest element
			*/
			if (data[elem] < data[smallestIndex])
			{
				/*
				Save the index of the current element
				*/
				smallestIndex = elem;
			} // !if
		} // !for

		/*
		Swap the current pass element with the found smallest element
		*/
		temp = data[pass];
		data[pass] = data[smallestIndex];
		data[smallestIndex] = temp;
	} // !for
} // !SelectionSort_Ascending

#endif // !Selection_Sort_Ascending_h