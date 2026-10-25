int binaryGap(int n) {
int last_one=-1;
int current_pos=0;
int max_dist = 0;
while(n>0){
    if(n&1){
    if(last_one!=-1){
    int dist = current_pos - last_one;
    if(dist>max_dist){
        max_dist=dist;
    }

    }
    last_one= current_pos;
    }
    n>>=1;
    current_pos++;    
    }
      return max_dist;
    


    
    
}
    


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna