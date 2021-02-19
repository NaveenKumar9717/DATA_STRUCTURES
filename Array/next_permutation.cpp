#include<bits/stdc++.h>
using namespace std ;

int main() {

	int n ;
	cin >> n;
	int nums[n] ;
	for (int i = 0 ; i < n; i++) {
		cin >> nums[i];
	}


	int  i = n - 2 ;
	while (i >= 0) {
		if (nums[i] < nums[i + 1] ) {
			sort(nums + (i + 1), nums +  n) ;
			int  j  = i + 1 ;
			while (j < n && nums[j] <= nums[i]) {
				j++ ;
			}
			swap(nums[i], nums[j]) ;
			break ;
		}
		i-- ;
	}

	if (i < 0) {

		for (int i = 0; i < (n / 2); i++) {
			swap(nums[i], nums[n - i - 1]) ;
		}
	}
	for (int  i = 0 ; i  < n ;  i++) {
		cout << nums[i] << " ";
	}
	cout << endl;

	return  0 ;
}