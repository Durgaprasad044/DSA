class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last;
        int left = 0;
        int max_len = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (last.find(ch) != last.end() && last[ch] >= left) {
                left = last[ch] + 1;
            }
            int curr_len = i - left + 1;
            max_len = max(max_len, curr_len);
            last[ch] = i;
        }
        return max_len;
    }
};