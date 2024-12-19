#include <iostream>
using namespace std;
#define ONE 1
#define TWO 2

void stringFilter(char* str)
{
	int state = ONE;

	int j = 0;

	for (int i = 0; str[i] != '\0'; i++) {

		if (state == ONE && str[i] != 'a'
			&& str[i] != 'b') {
			str[j] = str[i];
			j++;
		}

		if (state == TWO && str[i] != 'c') {
			
			str[j] = 'a';
			j++;

			if (str[i] != 'a' && str[i] != 'b') {
				str[j] = str[i];
				j++;
			}
		}

		state = (str[i] == 'a') ? TWO : ONE;
	}

	if (state == TWO) {
		str[j] = 'a';
		j++;
	}

	str[j] = '\0';
}

int main()
{
	char str1[] = "ad";
	stringFilter(str1);
	cout << str1 << endl;

	char str2[] = "acbac";
	stringFilter(str2);
	cout << str2 << endl;

	char str3[] = "aaac";
	stringFilter(str3);
	cout << str3 << endl;

	char str4[] = "react";
	stringFilter(str4);
	cout << str4 << endl;

	char str5[] = "aa";
	stringFilter(str5);
	cout << str5 << endl;

	char str6[] = "ababaac";
	stringFilter(str6);
	cout << str6 << endl;

	return 0;
}
