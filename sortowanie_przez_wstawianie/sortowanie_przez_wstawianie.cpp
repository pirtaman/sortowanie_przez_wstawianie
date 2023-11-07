#include <iostream>
using namespace std;

int n;
int tab[1000000];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    for (int i = 1; i < n; i++)
    {
        int temp = tab[i];
        int j = i - 1;
        while (j >= 0 && tab[j] > temp)
        {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab[i];
    }
}
