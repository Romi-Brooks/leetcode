// 字符串翻转解法
class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) {
            return 0;
        }
        if(x==0) {
            return 0;
        }
        bool flag=false;
        if(x<0) {
            flag=true;
            x=abs(x);
        }
        string strx=to_string(x);
        std::reverse(strx.begin(),strx.end());
        if(strx.length() > 10 || 
            (strx.length() == 10 && 
             (flag ? strx > "2147483648" : strx > "2147483647"))) {
            return 0;
        }
        if(flag==false) {
            return stoi(strx);
        }else{
            return -stoi(strx);
        }
    }
};