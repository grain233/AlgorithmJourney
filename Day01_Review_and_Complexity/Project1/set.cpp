/*练习 1：用 vector 和 set 去重并排序
题目：输入 n 个整数，输出去重后升序的元素个数和全部元素。
要求：先用 vector 读入，然后 sort，再 unique 去重。
再换一种方法：用 set<int> 自动去重排序，比较两种方法。
思考：哪种方法代码更短？哪种更省时间？（记录在题解里）*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
	int i,n,x;
	cin >> n;
	set<int> s;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		s.insert(x);
	}
	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}