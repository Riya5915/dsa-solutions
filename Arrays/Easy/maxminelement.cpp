#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }

    int maxE = INT_MIN, minE = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxE)
        {
            maxE = a[i];
        }
        if(a[i] < minE)
        {
            minE = a[i];
        }
    }
    cout << "maximum element = " << maxE << endl;
    cout << "minimum element = " << minE << endl;
    return 0;
}