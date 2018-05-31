class Solution {
public:
    int maxNum(int num1, int num2) {
        return num1 >= num2 ? num1 : num2;
    }
    int lengthOfLongestSubstring(string s) {
        if (s.empty())
            return 0;
        int map[128];
        for (int i = 0; i < 128; ++i)
            map[i] = -1;
        int begin = 0;
        int end = 0;
        int current = 0;
        int pre = -1;
        int len = 0;
        for (int j = 0; j < s.length(); ++j)
        {

            pre = maxNum(pre, map[s[j]]);

            current = j - pre;

            if (len <= current)
            {
                begin = pre + 1;
                end = j;
            }
            len = maxNum(len, current);
            map[s[j]] = j;
        }
        return (end - begin + 1);
    }
};
