#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int array[10] = {1, 547, 47, 451, 1024, -6, 54, 78, 44, 10};
    int i, j, temp, size = 10;
    for (i = 0; i < size - 1; i++)

        for (j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
    cout << "The Array Sorted in Ascending order is:" << endl;
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    return 0;
}