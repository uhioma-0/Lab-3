#include <iostream>
using namespace std;
void  swap_sort(int* a, int* b, int* c, bool* sorting)
{
	int temp;
	if (*sorting == false)//
	{
		if ((*a >= *b) && (*b >= *c)) {
		}
		if ((*a >= *c) && (*c >= *b)) {
			temp = *b;
			*b = *c ;
			*c= temp;
		}
		if ((*a <= *b) && (*a >= *c)) {
			temp =*a;
			*a = *b ;
			*b = temp;
			
		}
		if ((*c <= *b) && (*c >= *a)) {
			temp =*a;
			*a = *b;
			*b = *c ;
			*c = temp;
		}
		if ((*c >= *a) && (*a >= *b)) {
			temp =*c ;
			*a =*c ;
			*c = *b;
			*b =temp;
			
		}
		if ((*c >= *b) && (*b >= *a)) {
			temp = *a;
			*a = *c;
			*c =temp ;;
		}

	}
	if (*sorting == true)//
	{
		if ((*a <= *b) && (*b <= *c)) {
		}
		if ((*a <= *c) && (*c <= *b)) {
			temp = *b;
			*b = *c;
			*c = temp;
		}
		if ((*a >= *b) && (*a <= *c)) {
			temp = *a;
			*a = *b;
			*b = temp;

		}
		if ((*c >= *b) && (*c <= *a)) {
			temp = *a;
			*a = *b;
			*b = *c;
			*c = temp;
		}
		if ((*c <= *a) && (*a <= *b)) {
			temp = *c;
			*a = *c;
			*c = *b;
			*b = temp;

		}
		if ((*c <= *b) && (*b <= *a)) {
			temp = *a;
			*a = *c;
			*c = temp;;
		}


	}
}

/*
int main()
{
	while (1==1)
	{
		int a, b, c;
		bool sorting;
		cout << " Give a(0 to quit) :" << endl;
		cin >> a;
		if (a == 0) {
			cout << "Bye bye!" << endl;
			return 0;
			break;
		}
		cout << " Give b :" << endl;
		cin >> b;
		cout << " Give c :" << endl;
		cin >> c;
		cout << "Sort ascending / descending(1 / 0) :";
		cin >> sorting;
		int* ptrA = &a;
		int* ptrB = &b;
		int* ptrC = &c;
		bool* ptrSorting = &sorting;
		swap_sort(ptrA, ptrB, ptrC, ptrSorting);
		cout << " Result: " << *ptrA << "," << *ptrB << "," << *ptrC<< ",";
	}
}*/