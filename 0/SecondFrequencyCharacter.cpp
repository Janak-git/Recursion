#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256 

char getSecondMostFreq(string str) 
{ 
	int count[NO_OF_CHARS] = {0}, i; 
	for (i = 0; str[i]; i++) 
		(count[str[i]])++; 

	int first = 0, second = 0; 
	for (i = 0; i < NO_OF_CHARS; i++) 
	{ 
		if (count[i] > count[first]) 
		{ 
			second = first; 
			first = i; 
		} 

		else if (count[i] > count[second] && 
				count[i] != count[first]) 
			second = i; 
	} 

	return second; 
} 

// Driver code 
int main() 
{ 
	string str = "geeksforgeeks"; 
	char res = getSecondMostFreq(str); 
	if (res != '\0') 
		cout << "Second most frequent char is " << res; 
	else
		cout << "No second most frequent character"; 
	return 0; 
} 

