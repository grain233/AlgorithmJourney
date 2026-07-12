/*练习 3：用 priority_queue 求前 K 个最大值
题目：输入 n 个整数，再输入 k，输出这些整数中前 k 个最大的数（无需排序，用堆）。
要求：用 priority_queue，并思考：如果要找前 k 个最小，怎么做？
提示：大顶堆？小顶堆？如何定义比较函数？*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	priority_queue<int,vector<int>,greater<int> > pq;
	for (int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		if (pq.size() < k) pq.push(x);
		else if (x > pq.top())
		{
			pq.pop();
			pq.push(x);
		}
	}
	while (!pq.empty())
	{
		cout << pq. top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;
}
