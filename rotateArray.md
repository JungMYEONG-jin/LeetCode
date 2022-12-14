## i+k를 len으로 나눈 나머지를 인덱스라고 생각하면 쉽게 풀림

```c++
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();

    vector<int> dp(len);
    for (int i = 0; i <len; i++) {
        dp[(i + k) % len] = nums[i];
    }
    for (int i = 0; i < len; i++)
        nums[i] = dp[i];
    }
};
```
