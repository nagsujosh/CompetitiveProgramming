#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+10;
int arr1[N], arr2[N];

int main()
{
    int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
	    int num;
	    cin >> num;
	    arr1[num]++;
	}
	for(int j = 0; j < m; j++){
	    int num;
	    cin >> num;
	    arr2[num]++;
	}
	for(int i = 0; i < N; i++){
	    if(arr1[i] != 0 && arr2[i] == 0){
	        cout << i << " ";
	    }
	}
}



/*
Question: https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1
*/
