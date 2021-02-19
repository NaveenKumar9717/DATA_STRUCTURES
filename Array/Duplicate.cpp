#include<bits/stdc++.h>
using namespace std ;

int dupli(int* nums) {
    int x = 0  ;
    int duplicate  = -1 ;
    while (nums[abs(nums[x])] > 0) {
        nums[x] = -1 * nums[x]  ;

        x = abs(nums[x]) ;
    }
    return abs(nums[x]) ;

}

int main() {

    int n ;
    cin >> n ;
    int arr[n + 1] ;
    for (int i = 0 ; i <= n ; i++)
        cin >> arr[i] ;


    cout << dupli(arr) << endl;
    return  0 ;
}





















//<-----nsqueare solution man-----------------

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int duplicate = nums[0] ;
//         for (int i = 0 ; i < nums.size(); i++) {
//             bool flag = false ;
//             int current = nums[i] ;
//             for (int j = 0 ; j < nums.size(); j++) {
//                 if (i != j && current == nums[j]) {
//                     duplicate = nums[j] ;
//                     flag  = true ;
//                     break ;
//                 }
//             }

//             if (flag)
//                 break ;

//         }
//         return duplicate ;
//     }
// };