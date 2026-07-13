#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& v, int x)
{
	int left = 0, right = v.size() - 1, mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (v[mid] == x) return mid;
		if (v[left] <= v[mid])
		{
			if (v[left] <= x && x < v[mid]) right = mid - 1;
			else left = mid + 1;
		}
		else
		{
			if (v[mid] < x && x <= v[right]) left = mid + 1;
			else right = mid - 1;
		}
	}
	return -1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, t, x;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> x; v.push_back(x);
	}
	cin >> t;
	int ans = search(v, t);
	cout << ans << endl;
	return 0;
}