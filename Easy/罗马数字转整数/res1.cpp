// map映射+逻辑判断解法
class Solution {
public:
    int romanToInt(string s) {
        // map
        std::map<char, int> mapper = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int res=0;
        for(int i=0;i<s.size();i++) {
            int current=mapper[s[i]];
            if(i+1<s.size() && current<mapper[s[i+1]]){
                res=res-current;
            }else {
                res=res+current;
            }
        }
        return res;
    }
};