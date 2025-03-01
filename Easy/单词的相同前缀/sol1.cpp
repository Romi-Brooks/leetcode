class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return ""; // 如果数组为空，直接返回空字符串

    // 取第一个字符串作为初始前缀
    string prefix = strs[0];

    // 遍历数组中的每个字符串
    for (int i = 1; i < strs.size(); ++i) {
        // 临时变量用于存储当前字符串的公共前缀
        string temp = "";
        // 遍历当前字符串和前缀的每个字符
        for (int j = 0; j < min(prefix.size(), strs[i].size()); ++j) {
            if (prefix[j] == strs[i][j]) {
                temp += prefix[j]; // 如果字符相同，加入临时前缀
            } else {
                break; // 一旦发现不同，停止比较
            }
        }
        prefix = temp; // 更新前缀
        if (prefix.empty()) return ""; // 如果前缀为空，直接返回空字符串
    }

    return prefix; // 返回最终的最长公共前缀
    }
};