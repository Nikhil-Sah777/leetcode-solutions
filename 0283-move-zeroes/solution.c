// Problem: Move Zeroes (LeetCode #283) - Easy
// Link: https://leetcode.com/problems/move-zeroes/
// Approach: Two pointers, done in place. Pointer j tracks where the next non-zero
//           value should go. Loop through the array and copy each non-zero value
//           to position j. Then fill everything from j to the end with zeros.
// Time: O(n)  Space: O(1)

void moveZeroes(int* nums, int numsSize) {
    int j = 0;  // Position for the next non-zero element

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }

    // Fill the remaining positions with zeros
    while (j < numsSize) {
        nums[j++] = 0;
    }
}
