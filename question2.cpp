#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<string> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            // Compare adjacent strings
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    vector<string> arr = {"banana", "apple", "orange", "mango", "grape"};

    cout << "Original array:" << endl;
    for (const string &str : arr)
    {
        cout << str << " ";
    }
    cout << endl;

    // Sort the array of strings using bubble sort
    bubbleSort(arr);

    cout << "Array sorted using Bubble Sort:" << endl;
    for (const string &str : arr)
    {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
