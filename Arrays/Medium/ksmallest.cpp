//question-->   https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k){
    sort(arr+l, arr+r+1);
    int ans = arr[k-1];
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        
        int k;
        cin >> k;
        cout << kthSmallest(a, 0, n-1, k) << endl;
    }
    return 0;
}