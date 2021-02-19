#include<bits/stdc++.h>
using namespace std;

//O(n) ---SOLUTION------

int main()
{	int t ;
	cin >> t ;
	while (t--) {
		int n ;
		cin >> n;
		int arr[n] ;
		for (int i = 0 ; i < n; i++) {
			cin >> arr[i];
		}
		int jumps = 0 ;
		int  i = 0  ;

		while (i < (n - 1)) {
			if (i + arr[i] >= (n - 1)) {
				jumps++ ;
				break ;
			}

			int next_jump = arr[i] ;

			int j  =  i + 1 ;
			int max_jump = 0 ;

			while (j < (n) && next_jump > 0) {
				if (arr[j] + j >= max_jump + i) {
					max_jump  = arr[j] ;
					i = j ;
				}
				next_jump -- ;
				j++ ;
			}
			if (max_jump == 0) {
				jumps = -1 ;
				break ;
			}
			jumps++;
		}
		cout << jumps << endl;

	}
//Hi Naveen
	return 0;
}
