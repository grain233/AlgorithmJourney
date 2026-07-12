#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	auto last = unique(v.begin(), v.end());//把不重复的移到前面
	v.erase(last, v.end());//删除后面的重复部分
	cout << v.size() << endl;
	for (int x : v) cout << x << ' ';
	cout << endl;
	return 0;
}
//unique 只是把连续重复的元素往后扔，返回一个指向“新末尾”的迭代器。
//erase 真正删掉那些垃圾元素，这样 v 里就只剩不重复的。