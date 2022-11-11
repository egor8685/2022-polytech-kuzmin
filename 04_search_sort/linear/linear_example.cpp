#include <iostream>
#include "linear_function.cpp"
using namespace std;

int main()
{
    int a;
    int arr[] = {1, 2, 3, 3, 3};
    cout << "Element:" << endl;
    cin >> a;
    int n = size of(arr) / size of(arr[0]);
    int result[] = { 1, 2, 3, 3, 3 };

    int num = count(arr, n, a, result);
    if (num == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "There are " << num << " elements" << endl;
        cout << "Their idexes are " << endl;
        for (int s = 0; s < num; s++)
            cout << result[s] << endl;
    }
    system("pause");
    return 0;
}