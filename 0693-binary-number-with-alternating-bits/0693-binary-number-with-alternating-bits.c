// bool hasAlternatingBits(int n) {

//   int count;
//  while(n>0){
//     if(n==1){
//         int at= count++;{
//             if(at==0){
//                 return(true);
//             }
//             else {
//                 return (false);
//             }
//         }

//     }
//  }   
bool hasAlternatingBits(int n) {
    long long x = n ^ (n >> 1);
    return (x & (x + 1)) == 0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna