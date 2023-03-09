class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string base = strs[0];
        if(strs.size()==1)
            return base;
        string temp = "";
        int len = base.size();
        int veclen = strs.size();
        int idx = 0;

        for(int j = 0; j<=len;j++){
            string prev = temp;
            for(int i=1;i<veclen;i++){
                if(strs[i].substr(0, j) != base.substr(0, j))
                {
                    return prev;
                }
            }
            temp = base.substr(0, j);
        }

        return temp;
    }
};


# 개선 코드
    
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int idx = 0;
        for(int i=0, len = strs[0].size();i<len;i++){
            
            bool isSame = true;
            for(auto& str : strs){
                if(idx >= str.size() || str[idx] != strs[0][idx]){
                    isSame = false;
                    break;
                }
            }
            if(isSame){
                idx++;
            }else{
                break;
            }
        }

        return strs[0].substr(0, idx);
    }
};
