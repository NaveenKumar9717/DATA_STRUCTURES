#include<bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while (t--) {
		int n , m;
		cin >> n >> m;
		int arr[n][m] ;
		for (int i = 0 ; i < n; i++) {
			for (int j = 0 ; j < m; j++) {
				cin >> arr[i][j] ;
			}
		}
		int ans = 0 ;
		for (int i = 0 ; i < (n / 2); i++) {
			for (int j = 0 ; j < (m / 2); j++) {
				int current = arr[i][j] ;
				int  bottom = arr[n - i - 1][j] ;
				int  bottom_right = arr[n - i - 1][m - j - 1] ;
				int  right = arr[i][m - j - 1] ;
				int total_Sum = (current + bottom + bottom_right + right) ;
				if (total_Sum % 4 != 0) {
					int avg1 = total_Sum / 4 + 1 ;
					int avg2 = total_Sum / 4  ;
					int way1 = abs(bottom - avg1) + abs(bottom_right - avg1) + abs(right - avg1) + abs(current - avg1) ;
					int way2 = abs(bottom - avg2) + abs(bottom_right - avg2) + abs(right - avg2) + abs(current - avg2) ;
					ans += min(way1, way2) ;
				}
				else {
					int avg1 = total_Sum / 4  ;
					int way1 = abs(bottom - avg1) + abs(bottom_right - avg1) + abs(right - avg1) + abs(current - avg1) ;
					ans += way1 ;
				}

			}

		}

		if (n & 1 == 1) {
			int mid = n / 2 ;
			for (int i = 0; i < (m / 2); i++) {

				ans += abs(arr[mid][i] - arr[mid][m - i - 1]) ;
			}
		}
		if (m & 1 == 1) {
			int mid = m / 2 ;
			for (int i = 0; i < (m / 2); i++) {

				ans += abs(arr[i][mid] - arr[n - i - 1][mid]) ;
			}
		}
		cout << ans << endl;
		ans = 0 ;
	}

	return 0 ;
	1
	2 2
	1 9
	3 28
	35
	19 + 8 + 6

}