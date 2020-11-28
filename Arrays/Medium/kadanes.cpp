//question-->   https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int a[], int n){
    int ans = 0, sum = 0;
    for(int i = 0; i < n; i++){
        sum = max(a[i], (sum+ a[i]));
        ans = max(ans, sum); 
    }
    return ans;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        cout << maxSubarraySum(a, n) << endl;
    }
}