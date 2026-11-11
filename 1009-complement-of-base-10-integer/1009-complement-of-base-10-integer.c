int bitwiseComplement(int n) {
    int mask=0;
    int temp=n;
    while(temp>0){
        mask =(mask<<1)|1;
        temp>>=1;
    }
    return n^mask;
    }


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna