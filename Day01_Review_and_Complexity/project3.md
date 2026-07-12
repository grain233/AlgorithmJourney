# 题目
用优先队列求前 K 个最大值

# 思路
- 维护一个大小为 K 的小顶堆，堆顶是当前 K 个最大值中最小的那个。
- 遍历每个数字，如果堆未满直接插入，否则若当前数字大于堆顶，则替换。
- 遍历结束后堆中就是前 K 大的数字。

# 关键代码片段
```cpp
priority_queue<int, vector<int>, greater<int>> pq; // 小顶堆定义
if (pq.size() < k) pq.push(x);// 堆没满，直接进
else if (x > pq.top())// 堆满了，跟堆顶比
 { pq.pop();// 踢掉最小的  pq.push(x);// 新人进来}