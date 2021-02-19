#include <bits/stdc++.h>
using namespace std ;

int median(int*A, int *B, int m, int n) {
	int merged_size  = m + n ;

	int count = 0 ;
	int i , j = 0  ;
	i = j  ;
	int m1 = -1;
	int m2 = -1 ;
	int last  = 0  ;
	while ( i < m && j < n) {
		if (A[i] <= B[j]) {
			if (count == (merged_size / 2))
				m2  = A[i] ;
			else
				last = A[i] ;
			i++;
		}
		else {
			if (count == (merged_size / 2))
				m2  = B[j] ;
			else
				last = B[j] ;
			j++;

		}
		count++;
	}

	if (count < (merged_size / 2)) {

		while ( i < m ) {

			if (count == (merged_size / 2))
				m2  = A[i] ;
			else
				last = A[i] ;
			i++;
			count++;
		}
		while (j < n ) {
			if (count == (merged_size / 2))
				m2  = B[j] ;
			else
				last = B[j] ;

			j++;
			count++;
		}

	}
	if (merged_size % 2 == 0) {
		cout << "h " << last << m << endl;
		return (m2 + last) / 2 ;
	}
	else {
		return m2 ;
	}


}



int main() {
	int m, n ;
	cin >> m >> n;
	int *A = new int[m] ;
	int *B = new int[n] ;
	for (int i  = 0 ; i  < m; i++)
		cin >> A[i] ;


	for (int i  = 0 ; i  < n; i++)
		cin >> B[i] ;


	cout << median(A, B, m, n) << std::endl;;


	return  0;
}