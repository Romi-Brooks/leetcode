// 局部最优解（贪心算法）
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            } else {
                digits[i] = 0;
            }
        }

        vector<int> res(n + 1);
        res[0] = 1;// 99/999/9999....,extend the vec
        return res;
    }
};