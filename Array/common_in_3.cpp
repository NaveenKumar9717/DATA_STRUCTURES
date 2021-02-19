#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{

	vector<int> common ;
	int i = 0, j = 0, k = 0;


	while (i < n1 && j < n2 && k < n3)
	{
		// If x = y and y = z, print any of them and move ahead
		if (A[i] == B[j] && B[j] == C[k])
		{	common.push_back(A[i]) ;
			int element = A[i] ;
			while (A[i] == element) {
				i++ ;
			}
			while (B[j] == element) {
				j++ ;
			}

			while (C[k] == element) {
				k++ ;
			}

		}
		else if (A[i] < B[j] )
			i++ ;

		else if (B[j] < A[i] || B[j] < C[k])
			j++ ;

		else if (C[k] < A[i] || C[k] < B[j])
			k++;


	}

	int main() {
		vector<int>v ;


		for (int  i = 0 ; i < 5; i++) {
			v.push_back(i) ;
		}

		auto k  = v.begin() ;
		while (k != v.end()) {
			if ( (*k) < 4) {
				v.erase(k) ;
				cout << "*" << endl;
			}
			else {
				k++;
				cout << "#" << endl;
			}
		}

		return  0 ;
	}
