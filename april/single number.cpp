class Solution {
public:
    int res = 0;
    int singleNumber(vector<int>& nums) {
        for(int i : nums){
            res = res ^ i;
            
        }
        return res;
    }
};