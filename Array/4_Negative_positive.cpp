#include<bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while (t--) {
		int n ;
		cin >> n;
		int arr[n] ;
		for (int i = 0 ; i < n; i++) {
			cin >> arr[i] ;
		}
		int i = 0, j = n - 1 ;
		cout << i << " " << j << endl;
		while (i < j) {
			if (arr[i] > 0 && arr[j] < 0) {
				int temp  = arr[j] ;
				arr[j] = arr[i]  ;
				arr[i] = temp  ;
				i++ ;
				j--;
			}
			else if (arr[i] > 0 && arr[j] > 0) {
				j-- ;
			}
			else if (arr[i] < 0 && arr[j] < 0) {
				i++ ;
			}
			else {
				i++ ;
				j-- ;
			}
		}
		for (int i  = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	return 0 ;

}