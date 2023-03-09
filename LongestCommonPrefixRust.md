impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        let mut idx = 0;
        let base: &String = &strs[0];
        let mut baseLen = base.len();
        for i in 0..baseLen{
            let mut isSame = true;
            let str_iter = strs.iter();
            for str in str_iter {
                if idx >= str.len() || str.as_bytes()[idx] != base.as_bytes()[idx]{
                    isSame = false;
                    break;
                }
            }

            if isSame{
                idx = idx + 1;
            }else{
                break;
            }

        }
        

        return base[0..idx].to_string();
    }
}
