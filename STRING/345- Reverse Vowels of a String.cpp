class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        
        while(i<j){
            bool flag1=false,flag2=false;
            if(s[i]=='a'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='i'||s[i]=='A'||s[i]=='O'||s[i]=='U'||s[i]=='E'||s[i]=='I')
                flag1=true;
            if(s[j]=='a'||s[j]=='o'||s[j]=='u'||s[j]=='e'||s[j]=='i'||s[j]=='A'||s[j]=='O'||s[j]=='U'||s[j]=='E'||s[j]=='I')
                flag2=true;
            if(flag1&&flag2)
            {
                swap(s[i],s[j]);
                i++;
                j--;
                
            }
            if(!flag1)
                i++;
            if(!flag2)
                j--;
        }
       
       return s; 
    }
};


//APPROACH
// 1.Take two pointers i and j at first and last index and take two flag pointers as true
//     2. Check for both if any is vowel that put flag to false
//         3.Check if both flag are false then swap otherwise if i is false then j-- if j is false then i++;
