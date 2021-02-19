#include <bits/stdc++.h>
using namespace std;
# define N 5

int findMaxValue(int mat[][N]) {
	int a, b, c, d ;

	int Max_value = INT_MIN ;

	for (int a = 0 ; a < N - 1; a++) {
		for (int b = 0 ; b < N - 1; b++) {
			for (int c = a + 1 ; c < N; c++) {
				for (int d  = b + 1 ; d < N; d++) {
					if (Max_value < (mat[c][d] - mat[a][b])) {
						cout << mat[c][d] << " " << mat[a][b] << endl;
						Max_value  = (mat[c][d] - mat[a][b]) ;
					}
				}
			}
		}
	}

	return Max_value  ;


}

int main() {
	int mat[N][N] = {
		{ 1, 2, -1, -4, -20 },
		{ -10, -3, 4, 2, 1 },
		{ 3, 8, 6, 1, 3 },
		{ -4, -1, 1, 7, -6 },
		{ 0, -4, 10, -9, 18 }
	};
	cout << "Maximum Value is "
	     << findMaxValue(mat);
	Group
Member 1: Naveen Kumar
Member 1: Roll Number : 2K17 / MC / 067
Member 2 : PANKAJ
	Member 2 Roll Number: 2K17 / MC / 071
TOPIC : Fuzzy Image Enhancement

	return 0  ;
}