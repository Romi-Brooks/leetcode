// 双层遍历vec-erase解法
// 解法过于繁杂，注意到题目给的是有序数组，题解应当更加简单
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lenth=nums.size();
        int i=0;
        while(i<lenth){
            int k=i+1;
            while(k<lenth) {
                if(nums[i]==nums[k]){
                    nums.erase(nums.begin()+k);
                    lenth--;
                }else{
                    k++;
                }
            }
            i++;
        }
        return lenth;
    }
};