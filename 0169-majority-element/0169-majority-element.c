// brute force

// int majorityElement(int* nums, int numsSize) {
//     for (int i = 0; i < numsSize; i++) {
//         int count = 0;
//         for (int j = 0; j < numsSize; j++) {
//             if (nums[i] == nums[j]) {
//                 count++;
//             }
//         }
//         if (count > numsSize / 2) {
//             return nums[i];
//         }
//     }
//     return -1;
// }

// Boyer moore majority vote Algorithm
int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int candidate = 0;

    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna