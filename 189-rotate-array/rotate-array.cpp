class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;  // Edge case: Empty array

        k = k % n;  // Handle cases where k >= n

        if (k == 0) return;  // No need to rotate if k is 0

        vector<int> temp(k);  // Temporary storage for last k elements

        // Step 1: Store last k elements in temp
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }

        // Step 2: Shift the first (n-k) elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Step 3: Copy back temp elements to the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
