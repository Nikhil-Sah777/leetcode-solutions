// Problem: Reverse String (LeetCode #344) - Easy
// Link: https://leetcode.com/problems/reverse-string/
// Approach: Two pointers, done in place. Put one pointer at the start and one at
//           the end of the array. Swap the two characters using a temp variable,
//           move both pointers inward, and stop when they meet in the middle.
// Time: O(n)  Space: O(1)

void reverseString(char* s, int sSize) {
    int i = 0;
    int j = sSize - 1;
    int temp;

    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
