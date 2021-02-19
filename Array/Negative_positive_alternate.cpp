#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n ;
	int arr[n] ;
	for (int  i =  0 ; i < n; i++) {
		cin >> arr[i];
	}
	int current = 0  ;
	int  i = 1 ;
	int  j = 1 ;
	while (i < n && j < n && current < n) {
		if (current % 2 == 0 && arr[current] > 0) {
			i = current + 1 ;
			while (arr[i] > 0) {
				i++;
			}
			if (i < n && arr[i] < 0)
				swap(arr[i], arr[current]) ;
		}
		if ((current % 2 ) != 0 && arr[current] < 0) {
			j  = current + 1 ;
			while (arr[j] < 0 && j < n) {
				j++ ;
			}
			if (j < n && arr[j] > 0) {
				swap(arr[current], arr[j]) ;
			}
		}
		current ++ ;
	}

	for (int  i =  0 ; i < n; i++) {
		cout << arr[i] << " ";
	}
	return  0 ;
}