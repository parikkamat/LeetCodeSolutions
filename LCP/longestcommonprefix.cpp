class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
      //string result = "";
      string fInput = strs[0];
      
      for(int i=1; i<strs.size(); ++i){
          
          int j = 0;
          string result = "";
          while(j < min(fInput.length() , strs[i].length())){
              
               if(fInput[j] == strs[i][j]){
                   
                   result += fInput[j] ;
               }
               else{
                  break;
              }
              
              ++j;
          }
          fInput = result;
          
          
      }  
        
        return fInput;
        
    }
};


