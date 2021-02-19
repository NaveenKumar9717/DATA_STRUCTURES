bool subArrayExists(int arr[], int n)
{   if (arr[0] == 0) {
        return true ;
    }
    unordered_map<int, bool>mp ;
    int sum = 0 ;
    mp[sum] = true ;
    for (int i = 0; i < n; i++) {
        sum += arr[i] ;
        if (mp.count(sum) > 0) {
            return true  ;
        }
        mp[sum] = true ;
    }
    return false ;
}