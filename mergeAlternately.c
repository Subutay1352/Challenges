/*
We are given two strings word1 and word2.

Our task is to merge the strings by adding letters in alternating order, starting with word1. If one string is longer than the other, the additional letters must be appended to the end of the merged string.

We must return the merged string that has been formed.

There are numerous ways in which we can combine the given strings. We've covered a few of them in this article.

An intuitive method is to use two pointers to iterate over both strings. Assume we have two pointers, i and j, with i pointing to the first letter of word1 and j pointing to the first letter of word2. We also create an empty string results to store the outcome.

We append the letter pointed to by pointer i i.e., word1[i], and increment i by 1 to point to the next letter of word1. Because we need to add the letters in alternating order, next we append word2[j] to results. We also increase j by 1.

We continue iterating over the given strings until both are exhausted. We stop appending letters from word1 when i reaches the end of word1, and we stop appending letters from word2' when j reaches the end of word2.
*/





#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const char word1[20] = "merhaba";
const char word2[20] = "asker";
const char word3[20] = "b";
const char word4[20] = "f";



char * mergeAlternately(char * word1, char * word2){
  int len1 = 0, len2 = 0, len = 0;
  int i = 0, j = 0, k = 0;
  enum {SIZE = 50};
  len1 = strlen(word1);
  len2 = strlen(word2);
  len = len1 + len2;

  char* arr = malloc((len+1)*sizeof(char));


  while (i < len1 || j < len2) {
            if (i < len1) {
                arr[k++] = word1[i++];
            }
            if (j < len2) {
                arr[k++] = word2[j++];
            }
        }
  arr[k] = '\0';
  return arr;
}

int main() {

    //test
    printf("%s\n",mergeAlternately(word1,word2));
    printf("%s\n",mergeAlternately(word3,word4));
    //test

    return 0;
}