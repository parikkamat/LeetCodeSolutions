class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.size();
    bool table[n][n];
 
    memset(table, 0, sizeof(table));
 
    // All substrings of length 1
    // are palindromes
    int start = 0;
    int maxLength = 0;
        
    if(n == 0){
        return "";
    }    
 
    for (int i = 0; i < n; i++){
        table[i][i] = true;
        start = i;
        maxLength = 1;
    }
        
 
    // check for sub-string of length 2.
    
    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i + 1]) {
            table[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }
 
    // Check for lengths greater than 2.
    // k is length of substring
    for (int k = 3; k <= n; k++) {
        
        for (int i = 0; i < n - k + 1; i++) {
            
            int j = i + k - 1;
 
            
            if (table[i + 1][j - 1] == 1 && s[i] == s[j]) {
                table[i][j] = true;
                start = i;
                maxLength = k;
               
            }
        }
    }
        
        return (s.substr(start, maxLength));
    }
};
