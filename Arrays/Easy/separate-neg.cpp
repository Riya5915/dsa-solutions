//question-->   https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/  

#include <bits/stdc++.h>
using namespace std;

void separateNegatives(int a[], int n){
    int r = n-1, mid = 0;
    while (mid < r){
        if(a[mid] >= 0){
            swap(a[mid], a[r--]);
        }
        else
        {
            mid++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
         cin >> a[i]; 
    }
    
    separateNegatives(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}