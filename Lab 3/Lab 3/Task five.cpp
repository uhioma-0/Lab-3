#include<iostream>
using namespace std;

void replace_chars(char* str, char searchKey, char replecer)
{
	int i = 0;
	char index = *str;
	while (index != '\0')
	{
		index = *(str + i);
		if (index == searchKey)
		{
			*(str+i) = replecer;
			i += 1;
		}
		else
			i += 1;
			
			
	}
}

/*int main()
{
	char str[] = "hello";
	char* ptrStr = str;
	char searchKey = 'l';
	char replecer = 'G';
	replace_chars(ptrStr, searchKey, replecer);
	cout << "the new string is :" << str << endl;

}*/