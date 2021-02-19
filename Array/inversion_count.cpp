#include<bits/stdc++.h>
using namespace std ;

long long merge_func(long long arr[], int si , int mid, int end) {
  long long  i = si ;
  long long j  = mid + 1 ;
  long long  temp[end - si + 1] ;
  long long count = 0 ;
  long long  k = 0 ;
  while (i <= mid && j <= end) {
    if (arr[j] < arr[i]) {
      count += (mid - i + 1) ;
      temp[k++] = arr[j] ;
      j++ ;
    }
    else {
      temp[k++] = arr[i] ;
      i++;
    }
  }

  while (i <= mid) {
    temp[k++] = arr[i] ;
    i++ ;
  }
  while (j <= end) {
    temp[k++] = arr[j] ;
    j++;

  }
  int pt = 0 ;
  for (pt = 0 ; pt < k; pt++) {
    arr[si + pt] = temp[pt] ;
  }
  return count ;
}

long long inversionCountMerge(long long arr[], int si, int end) {
  if (si >= end)
    return 0  ;

  long long mid = si + (end - si) / 2 ;

  long long left_inversion =  inversionCountMerge(arr, si, mid) ;
  long long right_inversion = inversionCountMerge(arr, mid + 1, end);
  long long merged_inversion = merge_func(arr, si, mid, end) ;
  long long ans = left_inversion + right_inversion + merged_inversion ;
  return ans ;
}

long long int inversionCount(long long arr[], long long N)
{
  long long ans = inversionCountMerge(arr, 0, N - 1) ;
  for (long long i = 0 ; i < N ; i++) {
    cout << arr[i] << " " ;
  }
  cout << endl;
  return ans ;
}

int main() {
  long long n ;
  cin >> n ;
  long long arr[n] ;
  for (long long i = 0 ; i < n ; i++) {
    cin >> arr[i] ;
  }
  cout << inversionCount(arr, n) << endl;
  return 0  ;
}