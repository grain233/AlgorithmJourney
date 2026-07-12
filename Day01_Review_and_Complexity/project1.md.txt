# 题目
排序去重

# 思路
方法一：用 set<int> 自动去重并排序，插入完直接遍历。
方法二：用 vector 读入所有数，sort 排序，unique 去重，erase 删除。

# 关键代码片段（vector 方法）
```cpp
sort(v.begin(), v.end());
auto last = unique(v.begin(), v.end());
v.erase(last, v.end());
//unique 只是把连续重复的元素往后扔，返回一个指向“新末尾”的迭代器。
//erase 真正删掉那些垃圾元素，这样 v 里就只剩不重复的。

unique 不会改变容器大小，必须配合 erase。

set 会自动排序，但常数比 vector 大，数据量大时 vector 更快。

