#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 0, 5, 6, 7, 0, 8, 9, 0, 0};
    int n = a.size();
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        cout << "\nNo";
        return 0;
    }
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    for (auto i : a)
        cout << i << " ";

    return 0;
}