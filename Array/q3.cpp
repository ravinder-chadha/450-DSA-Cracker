#include <bits/stdc++.h>
using namespace std;

void Ans(int arr[], int n)
{
	int count0 = 0, count1 = 0, count2 = 0;

	for (int i = 0; i < n; i++) {
		switch (arr[i]) {
		case 0:
			count0++;
			break;
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		}
	}

    int i=0;
	while (count0 > 0) {
		arr[i++] = 0;
		count0--;
	}
	while (count1 > 0) {
		arr[i++] = 1;
		count1--;
	}

	while (count2 > 0) {
		arr[i++] = 2;
		count2--;
	}

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
    }
}

int main()
{
	int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	Ans(arr, n);

	return 0;
}
