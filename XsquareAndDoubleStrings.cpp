#include<bits/stdc++.h>
using namespace std;

int hsh[26];

int main()
{
    int t;
    cin >> t;
    while(t--){

        for(int i = 0; i < 26; i++){
            hsh[i] = 0;
        }
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            hsh[s[i] - 'a']++;
        }
        int ct = 0;
        for(int i = 0; i < 26; i++){
            if(hsh[i] >= 2){
                ct++;
                break;
            }
        }
        if(ct == 1) cout << "Yes\n";
        else cout << "No\n";
    }
}

/*
Question:https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/
*/
