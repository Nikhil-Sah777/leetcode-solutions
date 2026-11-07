// Problem: Container With Most Water (LeetCode #11) - Medium
// Link: https://leetcode.com/problems/container-with-most-water/
// Approach: Two pointers. Start with one pointer at each end of the array.
//           Compute the area, then move the pointer at the shorter line inward,
//           because the shorter line limits the height. Keep the max area seen.
// Time: O(n)  Space: O(1)

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int ans = 0;

    while (left < right) {
        int area = min(height[left], height[right]) * (right - left);
        ans = max(ans, area);

        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return ans;
}
