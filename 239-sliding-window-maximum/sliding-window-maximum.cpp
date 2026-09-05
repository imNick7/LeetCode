class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;

        deque<int> dq;

        for (int i = 0; i < n; i++) {

            // Window se bahar ke indices remove karo
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Chhote elements remove karo
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }

            // Current index add karo
            dq.push_back(i);

            // Window complete hone ke baad answer
            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};