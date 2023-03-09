use std::collections::HashMap;
impl Solution {


    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut db = HashMap::new();

        let mut nums_iter = nums.iter();
        let mut idx = 0;

        let mut v = Vec::new();
        for num in nums_iter{

            if!db.contains_key(&(target - num)){
                db.insert(num, idx);
            }else{
                v.push(idx);
                v.push(*db.get(&(target - num)).unwrap());
                return v;
            }

            idx = idx + 1;
        }
        return v;

    }
}
