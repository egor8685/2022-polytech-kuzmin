#include <iostream>

using namespace std;

int search(int arr[], int a, int b)
{
    for (int i = 1; i < a; ++i)
    {
        if (arr[i] == b)
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int b;
    int arr[] = { -996, -960, -944, -887, -865, -860, -846, -831, -790, -785, -700, -691, -662, -662, -647,
-640, -587, -532, -524, -519, -501, -497, -475, -471, -461, -457, -452, -442, -441, -416,
-412, -411, -390, -389, -358, -341, -306, -257, -253, -252, -248, -208, -143, -134, -82,
-79, -11, 21, 26, 48, 68, 69, 72, 93, 95, 99, 115, 120, 156, 164, 181, 200, 231, 252, 288,
304, 336, 343, 364, 402, 419, 486, 546, 584, 595, 596, 606, 627, 636, 666, 666, 683, 701,
740, 766, 780, 782, 794, 802, 829, 832, 837, 858, 875, 881, 882, 883, 883, 947, 959 };
    cout << "Element:" << endl;
    cin >> b;
    int a = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, a, b);
    if (result == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "Element is present at index " << result << endl;
    }
    system("pause");
    return 0;
}