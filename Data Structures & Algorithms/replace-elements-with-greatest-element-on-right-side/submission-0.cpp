class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int last = arr.size() - 1;
        int greatest = arr[last];
        int curr = 0;
        for (int i = last - 1; i >= 0; i--) {
            curr = arr[i];
            arr[i] = greatest;
            greatest = max(curr, greatest);
        }
        arr[last] = -1;
        return arr;
    }
};