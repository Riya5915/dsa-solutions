//question-->   https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0#

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    set<int> ans;
	    for(int i = 0; i < n; i++){
	        cin >> a[i];
	        ans.insert(a[i]);
	    }
	    for(int i = 0; i < m; i++){
	        cin >> b[i];
	        ans.insert(b[i]);
	    }
	    
	    cout << ans.size() << endl;
	    //ans.clear();
	}
	return 0;
}