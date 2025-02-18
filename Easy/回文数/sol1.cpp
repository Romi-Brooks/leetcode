// vector标准库reverse解法
class Solution {
public:
    bool isPalindrome(int x) {
        // 防止以0结尾的数值出现bug(但其实好像徒增了时间复杂度)
        // int checker= x%10;
        // if(x!=0 && checker==0) {
        //     return 0;
        // }
        std::string reverse_num= std::to_string(x);
        std::reverse(reverse_num.begin(),reverse_num.end());
        if(reverse_num == std::to_string(x)) {
            return 1;
        }else {
            return 0;
        }
    }
};