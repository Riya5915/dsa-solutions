//questions-->  https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

#include <bits/stdc++.h>
using namespace std;

void sort012(int [], int);

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i = 0, i < n; i++){
            cout << a[i] << " " ;
        }
        cout << endl;
    }    
    return 0;
}

void sort012(int arr[], int n){
    // better approach
    int low = 0, mid  = 0, high = n-1;
    while(mid <= high){

        if(arr[mid] == 0){
            swap(arr[low++], arr[mid++]);
        } 
        else if(arr[mid] == 2)
        {
            swap(arr[high--], arr[mid]);
        }
        else{
            mid++;
        }
    }
}

//my brute force approach
/**
 * int a = o, b = 0, c = 0;
 * for(int i = 0; i < n; i++){
 *      if(arr[i] == 0){
 *          a++;
 *      } else if(arr[i] == 1){
 *          b++;
 *      } else {
 *          c++;
 *      }
 * }
 * for(int i = 0; i < n; i++){
 *      if(a > 0){
 *          arr[i] = 0;
 *          a--;
 *      } else if(b > 0){
 *          arr[i] = 1;
 *          b--;
 *      } else if(c > 0) {
 *          arr[i] = 2;
 *          c--;
 *      }
 * }
 **/