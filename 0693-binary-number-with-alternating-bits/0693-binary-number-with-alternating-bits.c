bool hasAlternatingBits(int n) {
    int last_bit = -1;

    while(n>0){
        int current_bit = n%2;
        if (current_bit==last_bit){
            return false;
        }
        last_bit = current_bit;
        n>>=1;
    }
    return true;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna