//question link-->  https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    int l = str.length();
  int st = 0, en = l-1;
  while(st < en){
      char temp = str[st];
      str[st] = str[en];
      str[en] = temp;
      
      st++;
      en--;
  }
  return str;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}