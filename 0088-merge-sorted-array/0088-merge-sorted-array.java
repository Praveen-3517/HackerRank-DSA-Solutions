import java.util.Arrays;

class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] arr = new int[m + n];

        for (int i = 0; i < m; i++) {
            arr[i] = nums1[i];
        }
        for (int i = 0; i < n; i++) {
            arr[m + i] = nums2[i];
        }

        Arrays.sort(arr);

        for (int i = 0; i < m + n; i++) {
            nums1[i] = arr[i];
        }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna