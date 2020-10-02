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


int maxPathSum(TreeNode *root, int &result)
{
	if(!root)
		return 0;

	int left = maxPathSum(root -> left, result);
	int right = maxPathSum(root -> right, result);

	int max_straight = max(max(left, right) + root->val, root->val);
	int max_caseVal = max(max_straight, left + right + root->val);
	result = max(result, max_caseVal);

	return max_straight;
}


int main()
{

		int result = INT_MIN;
		maxPathSum(root, result);
		return result;
}