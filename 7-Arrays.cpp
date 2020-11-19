#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n;
    cin >> n; //size of the array
    vector <int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }

}
