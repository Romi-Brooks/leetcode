// vector - erase解法
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // sort(nums.begin(),nums.end());
        short size=nums.size();
        short i=0;
        while(i<size){
            if(nums[i] == val) {
                nums.erase(nums.begin()+i);
                size--;
            }else{
                i++;
            }
        }
        return size;
    }
};