//题目：给定一个升序数组和一个目标值 target，返回 target 应该插入的索引，
// 使插入后数组仍然有序。如果 target 已存在，插入到最前面。
#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int>& v, int x)
{
	int mid,left = 0, right = v.size();
	while (left < right)
	{
		mid = left + (right - left) / 2;
		if (v[mid] >= x) right = mid;
		else left = mid + 1;
	}
	return left;
}

int main()
{
	int n, x,target;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	cin >> target;
	int ans = lowerbound(v, target);
	cout << ans << endl;
	return 0;
}
