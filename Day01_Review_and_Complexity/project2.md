#题目
统计字符串频率

#思路
用 map<string, int> 计数，然后遍历输出

扩展：如果要求按出现次数从高到低输出，怎么办？map 本身做得到吗？
map 自身只能按“键”排序，不能按“值”排序。需要把键值对倒出来，用 vector 存，再自定义排序规则。


    // 把 map 中的键值对倒入 vector
    vector<pair<string, int>> vec(mp.begin(), mp.end());
    
    // 按次数从高到低排序；次数相同按字典序
    sort(vec.begin(), vec.end(),
         [](const pair<string, int>& a, const pair<string, int>& b) {
             if (a.second != b.second)
                 return a.second > b.second; // 次数高在前
             return a.first < b.first;       // 次数相同，字典序在前
         });
    
    for (auto& p : vec)
        cout << p.first << " : " << p.second << endl;
    
Lambda 排序
sort(a.begin(), a.end(), [](参数1, 参数2) -> bool {
    // 比较逻辑
    return 条件;
});
[ ]：捕获列表（空 = 不捕获外部变量）
(x,y)：两个待比较元素
返回 true 代表：x 应该排在 y 前面
核心规则
return x < y → 升序（从小到大）
return x > y → 降序（从大到小）