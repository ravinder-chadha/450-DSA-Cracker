#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = 0, a; //here according to question we must use array
    for (int i = 0; i < n; i++)
    {
        cin >> a; //but I have written an easy code for the same purpose
        if (max <= a)
            max = a;
    }
    cout << max << endl;
}