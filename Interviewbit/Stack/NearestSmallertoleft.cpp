#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#define fo(i,l,r) for(int i=l;i< r;++i)
#define fi(i,r,l) for(int i=r;i>=l;--i)
#define pb push_back
#define po pop_back
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long int lli;
typedef unsigned long long int ulli;
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
using namespace std;
#define M 1000000007



vector<int>  NSL(vector<int> arr, int n)
{
	vector<int> left;
	stak<pair<int, int>> s;

	int pseudo_index = -1;
	for(int i = 0; i < n; i++)
	{
		if(s.size() == 0)
			left.push_back(pseudo_index);
		else if(s.size() > 0 && s.top().first< arr[i])
	}
}