#include <iostream>
#include <vector>
using namespace std;
vector<int> wt = {1, 5, 11, 13}, p = {60, 100, 120};
int w = 11;
bool k(int n, int s1, int s2)
{
    if (n == 0)
        return s1 == s2;
    else if (wt[n - 1] <= w)
        return k(n - 1, s1 + wt[n - 1], s2) || k(n - 1, s1, s2 + wt[n - 1]);
    return 0;
}
int sum(vector<int> v)
{
    int s = 0;
    for (auto i : v)
        s += i;
    return s;
}
int main()
{
    if (sum(wt) % 2 != 0)
        cout << "Not Possible ";

    else
        cout << k(wt.size(), 0, 0);
}