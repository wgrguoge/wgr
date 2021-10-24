#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void radixSort(int *arr, size_t arr_len)
{
    vector<int> stacks[10];

    for (size_t i = 0; i < sizeof(stacks) / sizeof(vector<int>); i++)
        stacks[i] = vector<int>();

    int
        max = arr[0],
        max_power_of_10 = 0;

    for (size_t i = 1; i < arr_len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    while (max / (int)pow(10, max_power_of_10) != 0)
    {
        max_power_of_10++;
    }

    for (int power_of_10 = 0; power_of_10 < max_power_of_10; power_of_10++)
    {
        for (size_t i = 0; i < arr_len; i++)
            stacks[arr[i] / (int)pow(10, power_of_10) % 10].push_back(arr[i]);

        int arr_index = 0;
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < stacks[i].size(); j++)
            {
                arr[arr_index] = stacks[i].at(j);
                arr_index++;
            }
            stacks[i].clear();
        }
    }
}

int main()
{
    int arr[] = {22, 44, 66, 88, 99, 77, 55, 33, 11,114 , 187, 444};
    radixSort(arr, sizeof(arr) / sizeof(int));
    for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
        printf("%4d ", arr[i]);
    return 0;
}