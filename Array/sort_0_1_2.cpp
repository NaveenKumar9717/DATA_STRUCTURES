#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while (t--) {
        int n ;
        cin >> n ;
        int arr[n] ;
        int count_0 = 0 ;
        int count_1 = 0 ;
        int count_2 = 0 ;
        for (int i = 0 ; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) {
                count_0++ ;
            }
            else if (arr[i] == 1) {
                count_1++ ;
            }
            else {
                count_2++ ;
            }
        }
        int i = 0 ;
        while (count_0--) {
            arr[i] = 0 ;
            i++ ;
        }
        while (count_1--) {
            arr[i] = 1 ;
            i++ ;
        }
        while (count_2--) {
            arr[i] = 2 ;
            i++ ;
        }
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    return 0;
}