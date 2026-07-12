/*练习 2：用 map 统计字符串频率（字典序输出）
题目：输入 n 个字符串（可能重复），按字典序输出每个字符串出现的次数。
要求：用 map<string, int> 计数，然后遍历输出。
扩展：如果要求按出现次数从高到低输出，怎么办？map 本身做得到吗？（题解里回答即可，不用写代码）*/
#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
	string s;
	map<string, int> mp;
	for (i = 1; i <= n; i++)
	{
		cin >> s;
		mp[s]++;
	}
	map<string, int>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++)
		cout << it->first << " : " << it->second << endl;
	cout << endl;
	return 0;
}