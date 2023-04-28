/* Solution - 1: Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){
    vector <int> nge(v.size());
    stack<int> st;
    for(int i = 0; i < v.size(); i++){
        while(!st.empty() && v[i] > v[st.top()]){
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> nge = NGE(v);
    for(int i = 0; i < n; i++){
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }
}
Solution - 1: Ends*/


/* Solution - 2: Starts
#include<bits/stdc++.h>
using namespace std;

int index(vector<int> v, int n){
    int i = 0;
    for(; ; i++){
        if(v[i] == n){
            break;
        }
    }
    return i;
}

vector<int> NGE(vector<int> v){
    vector<int> ans(v.size());
    stack<int> num;
    for(int i = 0 ; i < v.size(); i++){
        while(!num.empty() && v[i] > num.top()){
            ans[index(v, num.top())] = v[i];
            num.pop();
        }
        num.push(v[i]);
    }
    while(!num.empty()){
        ans[index(v, num.top())] = - 1;
        num.pop();
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        v[i] = num;
    }
    vector<int> ans = NGE(v);
    for(int i = 0; i < n; i++){
        cout << v[i] << " " << ans[i] << endl;
    }
}
Solution - 2: Ends*/

/* Question Link: https://www.hackerrank.com/contests/second/challenges/next-greater-element/problem */
