/*
Problem statement -> reverse a given string
*/
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
       int s = 0;
       int e = str.size()-1;
       while(e-s >= 1){
           char c = str[s];
           str[s] = str[e];
           str[e] = c;
           s++;
           e--;
       }
       return str;
    }
};
