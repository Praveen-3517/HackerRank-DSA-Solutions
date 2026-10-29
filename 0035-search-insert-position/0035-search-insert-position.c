int searchInsert(int* nums, int numsSize, int target) {
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= target) {
            return i;
        }
    }

    return numsSize;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna