
#include <iostream>
using namespace std;

int n;
int do_posortowania[1000000];

int main()
{
    cin >> n;
    for (int i = 0; i < n;i++) cin >> do_posortowania[i];
    for (int i = 1; i<n;i++)
    {
        int sprawdzana_liczba = do_posortowania[i];
        int j = i - 1;
        while (j >= 0 && do_posortowania[j] > sprawdzana_liczba){
            do_posortowania[j + 1] = do_posortowania[j];
            j--;
        }
        do_posortowania[j + 1] = sprawdzana_liczba;
    }
    for (int i = 0; i < n; i++) cout << do_posortowania[i];
    
}
