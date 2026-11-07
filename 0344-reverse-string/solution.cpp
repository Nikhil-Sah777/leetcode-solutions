// Problem: Reverse String (LeetCode #344) - Easy
// Link: https://leetcode.com/problems/reverse-string/
// Approach: Two pointers, done in place. Put one pointer at the start and one at
//           the end of the array. Swap the two characters, move both pointers
//           inward, and stop when they meet in the middle.
// Time: O(n)  Space: O(1)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};
