class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ') + 1);

        return s.substr(s.find_last_of(' ') + 1).length();
    }
};