#include <omp.h>
#include "oleg.h"

int main()
{
	double start1;
	double end1;
	double start2;
	double end2;
	while (true)
	{
		int a = 0;
		cout << "Size:" << endl;
		cin >> a; 
		int *arr = new int[a]; 

		fill_array_random(arr, a, 0, 100);

		start1 = omp_get_wtime();

		sort(arr, a);

		end1 = omp_get_wtime();
		double time1 = end1 - start1;

		cout << a << ":" << time1 << " (ss)"; 

		fill_array_random(arr, a, 0, 100); 

		start2 = omp_get_wtime();

		quick_sort(arr, 0, a - 1);

		end2 = omp_get_wtime();
		double time2 = end2 - start2;

		cout << ", " << time2 << " (qs)" << endl;
		delete[] arr;
	}
	return 0;
}