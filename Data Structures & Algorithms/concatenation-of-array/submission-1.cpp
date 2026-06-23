class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
  
        // algo

        // two pass
        vector<int> ans;
            for (int i = 0; i < 2; ++i) {
                for (int num : nums) {
                    ans.push_back(num);
                }
            }
        
        // one pass
        // ans with 2 * the lenght of arg nums
        // iterate once by the length of nums
            // insert at i and i + n
  
        return ans;
    }
};