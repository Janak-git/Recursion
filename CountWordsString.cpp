#include <iostream>
#include <cstring>
using namespace std;

#define OUT 0 
#define IN 1 

int countWords(char* str, int n) {
  if (n == 0) {
    return 0;
  }
  int wordCount = 0;
  int state = OUT; 
  for (int i = 0; i < n; i++) {
    if (str[i] == '\\') {
      continue;
    }
    if (isalnum(str[i])) {
      if (state == OUT) {
        wordCount++;
        state = IN;
      }
    }
 
    else {
     
      state = OUT;
    }
  }

  return wordCount;
}


// Driver code
int main() { 
    char str[] ="abc\\p\""; 
    cout << "No of words: " << countWords(str, strlen(str)) << endl;
    return 0; 
}
