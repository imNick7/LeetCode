class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;
        int mxcount = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 1) {
                count++;
            }
            else {
                mxcount = max(mxcount, count);
                count = 0;
            }
        }

        mxcount = max(mxcount, count);

        return mxcount;
    }
};