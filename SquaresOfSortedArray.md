## 간단한 구현

```c++
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto& i : nums)
            i*=i;
        sort(nums.begin(), nums.end());
        return nums;
    }
};
```
