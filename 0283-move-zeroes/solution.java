// Problem: Move Zeroes (LeetCode #283) - Easy
// Link: https://leetcode.com/problems/move-zeroes/
// Approach: Two pointers, done in place. Pointer j tracks where the next non-zero
//           value should go. Loop through the array and copy each non-zero value
//           to position j. Then fill everything from j to the end with zeros.
// Time: O(n)  Space: O(1)

class Solution {
    public void moveZeroes(int[] nums) {
        int j = 0; // Position for the next non-zero element

        // Move all non-zero elements to the front
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // Fill the remaining positions with zeros
        while (j < nums.length) {
            nums[j] = 0;
            j++;
        }
    }
}
