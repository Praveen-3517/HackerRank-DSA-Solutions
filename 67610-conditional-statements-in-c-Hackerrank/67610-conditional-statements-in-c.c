
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);
    char *word[] = {"","one","two","three","four","five","six","seven","eight","nine"};
      
if (n>=1 && n<=9)
{
    printf("%s\n", word[n]);
}
 else { 
printf("Greater than 9");
}
    return 0;
}
 /*
1. char *words[]
C language mein seedhe taur par "String" (words) naam ka koi data type nahi hota. Isliye words likhne ke liye humein is syntax ka use karna padta hai:

- char: Iska matlab hai 'Character' (akshar jaise 'a', 'b', 'c').
- * (Star/Pointer): Jab char ke aage star lag jata hai (char *), toh C language samajh jati hai ki humein sirf ek akshar nahi, balki poora ka poora word (string) store karna hai.
- words: Yeh sirf is list ka naam hai. Aap chaho toh iska naam names[] ya list[] bhi rakh sakte ho.
- [] (Square Brackets): Yeh brackets batate hain ki yeh ek Array (List ya Dibba) hai, jisme ek nahi, balki bahut saare words ek sath rakhe jayenge.

Kahaani ke roop mein:
Maan lo words[] ek dawaiyo (medicines) ka bada sa box hai, aur us box ke andar chhote-chhote khaane (slots) bane hain jisme alag-alag words (one, two, three...) rakhe hue hain.

2. if (n >= 1 && n <= 9) { printf("%s\n", words[n]); }
Yeh line code ka "Decision Maker" hai. Isko tukdo mein samajhte hain:

- if: Agar...
- n >= 1: n (jo number user ne dala hai) 1 ke barabar ya usse bada ho.
- && (AND Operator): Aur... (Iska kaam hai check karna ki dono taraf ki baatein sach honi chahiye).
- n <= 9: n 9 ke barabar ya usse chhota ho.

(Poori condition ka matlab: "Agar user ka number 1 se lekar 9 ke beech mein hai, tabhi andar jao.")

Ab Brackets { } ke andar ka magic:

- printf: Screen par kuch print karne wala function.
- "%s" (String Formatter): C language mein jab bhi humein koi word (string) print karna hota hai, toh hum %s likhte hain. Yeh %s computer ko batata hai ki, "Bhai, yahan par koi word aane wala hai, tayyar rehna."
- \n: Yeh sirf nayi line (Next line) mein jane ke liye hota hai, taaki output sundar dikhe.
- words[n]: Yeh sabse main cheez hai. Iska matlab hai "Uss array (list) mein se 'n' number wale dabbe ko kholo aur uske andar ka word nikal lo".
*/


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna