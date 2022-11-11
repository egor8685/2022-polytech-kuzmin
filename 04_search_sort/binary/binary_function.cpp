#include <iostream>

int bsearch(int arr[], int s, int e, int a) 
{
	if (e >= 1)
	{
		while (s <= e)
		{
			int m = (s + e) / 2;
			if (arr[m] == a)
				return m;
			if (arr[m] < a)
			{
				s = m + 1;
			}
			if (arr[m] > a)
			{
				e = m - 1;
			}
		}
	}
	return -1;
}