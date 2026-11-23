 int maxProfit(int* prices, int pricesSize) {
//     int max = 0;
//     for (int i = 0; i < pricesSize; i++) {
//         for (int j = i + 1; j < pricesSize; j++) {
//             if (prices[i] < prices[j]) {
//                 int profit = prices[j] - prices[i];
//                 if (profit > max) {
//                     max = profit;
//                 }
//             }
//         }
//     }
//     return max;
// }

if (pricesSize <= 1) {
        return 0;
    }

    int min = prices[0];
    int profit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i];
        } else if (prices[i] - min > profit) {
            profit = prices[i] - min;
        }
    }

    return profit;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna