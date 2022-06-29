>TwomSum
일일이 루프를 돌며 구하면 비효율적임. 따라서 한번 돌때마다 target에서 현재값을 뺀 값이 벡터에 존재하는지 체크후 있다면 리턴하는 식으로 풀었음.


``` c++
#include <algorithm>
#include <vector>

class Solution {
public:
    
    
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
	        for (int i = 0, len = nums.size(); i < len; i++) {
		    int tmp = target - nums[i];
		    auto it = find(nums.begin() + i + 1, nums.end(), tmp);
		    if (it != nums.end())
		    {
			    result.push_back(i);
			    result.push_back(it - nums.begin());
			    return result;
		    }
	        }
	         return result;

        }
};


```
