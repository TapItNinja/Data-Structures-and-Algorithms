class Solution {
public:
    bool isPalindrome(int n) {
         long  revNum = 0;

    long  dup = n;
    while (n > 0) {
        long ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if (dup == revNum) {
        return true;
    } else {
        return false;
    }}
};