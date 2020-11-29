#include <iostream>
using namespace std;
int length_of_string(char *ptr)
{
	char* newPtr = ptr;
	int index = 1;
	for (int i=0;i<index;i++)
	{
		newPtr = ptr + i;
		if (*newPtr != '\0')
		{
			index += 1;
		}
	}
	return index-1;
}
/*int main()
{
	char arr[] = "husnihusen";
	char* ptr = arr;
	int length = length_of_string(ptr);
	cout << "the length of " << arr << " is " << length << endl;
}*/