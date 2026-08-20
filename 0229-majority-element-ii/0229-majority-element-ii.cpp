class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int, int> mp;
        vector<int> ans;

        // Count frequency of every element
        for (int x : nums) {
            mp[x]++;
        }

        // Check which elements appear more than n/3 times
        for (auto x : mp) {
            if (x.second > nums.size() / 3) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};