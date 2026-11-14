int rangeBitwiseAnd(int left, int right) {
    int shiftCount= 0;
    while (left<right){
        left>>=1;
        right>>=1;
        shiftCount++;
    }
    return left<< shiftCount;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna