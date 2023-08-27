/*
For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""
 

Constraints:

1 <= str1.length, str2.length <= 1000
str1 and str2 consist of English uppercase letters.
*/

#include <stdio.h>


const char str1[20] = "ABCABC";
const char str2[20] = "ABC";


char * gcdOfStrings(char * str1, char * str2){

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    while (len2>0) {
        if (len1<len2) {
            int x = len1;
            len1 = len2;
            len2 = x;

            char * temp = str1;
            str1 = str2;
            str2 = temp;
        }

        for (size_t i=0 ; i<len2 ; i++) {
            if (str1[i]!=str2[i]) return "";
        }
        str1 += len2;
        len1 -= len2;
    }

    return str1;
}

int main() {

    printf("%s\n",gcdOfStrings(str1,str2));

    return 0;
}