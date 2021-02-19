#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ;
	cin >> t ;
	while (t--) {
		int n ;
		cin >> n;
		int arr[n] ;
		int current_sum = 0 ;
		int maximum_sum = INT_MIN ;
		int max_element = INT_MIN ;
		for (int i = 0; i < n; i++) {
			cin >> arr[i] ;
			max_element = max(max_element, arr[i]) ;
			if (current_sum + arr[i] > 0) {
				current_sum += arr[i] ;
			}
			else {
				current_sum = 0 ;
			}

			if (current_sum > maximum_sum) {
				maximum_sum = current_sum ;
			}
		}
		if (max_element < 0) {
			cout << max_element << endl;
		}
		else {
			cout << maximum_sum << endl;
		}
	}
	return 0;
}