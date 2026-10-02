#include<stdio.h>

int main() {
    int n;
    int sum = 0;
    
    scanf("%d", &n);
    
    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;           
    }
    printf("%d\n", sum);
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna