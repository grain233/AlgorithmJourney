//题目：第一行输入 n 和 m（n 个数，m 次查询），第二行输入 n 个升序整数。
//接下来 m 行每行一个待查整数，输出该数第一次出现的下标（从 0 开始），找不到输出 -1。
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(const vector<int>& v, int x)
{
	int left = 0, right = v.size()- 1,mid,ans = -1;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (v[mid] >= x)
		{
			if (v[mid] == x) ans = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m,k;
	vector<int> v;
	cin >> n >> m;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x; v.push_back(x);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> k;
		int ans=binarySearch(v, k);
		cout << ans << endl;
	}
	return 0;
}