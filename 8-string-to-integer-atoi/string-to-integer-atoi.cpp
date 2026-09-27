class Solution {
public:
    int myAtoi(string s) {
        int INT_MAX_VAL = INT_MAX;
        int INT_MIN_VAL = INT_MIN;

        int i = 0;
        int n = s.length();
        long long result = 0;
        int sign = 1;

        // Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Check sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Convert digits
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Check overflow
            if (result > (INT_MAX_VAL - digit) / 10) {
                return (sign == 1) ? INT_MAX_VAL : INT_MIN_VAL;
            }

            result = result * 10 + digit;
            i++;
        }

        return sign * result;
    }
};