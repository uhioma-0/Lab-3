#include <iostream>
using namespace std;
void  swap_sort_ptr_addr(int** a, int* *b, int** c, bool sorting)
{
	int temp;
	if (sorting == false)//
	{
		if ((**a >= **b) && (**b >= **c)) {
		}
		if ((**a >= **c) && (**c >= **b)) {
			temp = **b;
			**b = **c;
			**c = temp;
		}
		if ((**a <= **b) && (**a >= **c)) {
			temp = **a;
			**a = **b;
			**b = temp;

		}
		if ((**c <= **b) && (**c >= **a)) {
			temp = **a;
			**a = **b;
			**b = **c;
			**c = temp;
		}
		if ((**c >= **a) && (**a >= **b)) {
			temp = **c;
			**a = **c;
			**c = **b;
			**b = temp;

		}
		if ((**c >= **b) && (**b >= **a)) {
			temp = **a;
			**a = **c;
			**c = temp;;
		}

	}
	if (sorting == true)//
	{
		if ((**a <= **b) && (**b <= **c)) {
		}
		if ((**a <= **c) && (**c <= **b)) {
			temp = **b;
			**b = **c;
			**c = temp;
		}
		if ((**a >= **b) && (**a <= **c)) {
			temp = **a;
			**a = **b;
			**b = temp;

		}
		if ((**c >= **b) && (**c <= **a)) {
			temp = **a;
			**a = **b;
			**b = **c;
			**c = temp;
		}
		if ((**c <= **a) && (**a <= **b)) {
			temp = **c;
			**a = **c;
			**c = **b;
			**b = temp;

		}
		if ((**c <= **b) && (**b <= **a)) {
			temp = **a;
			**a = **c;
			**c = temp;;
		}


	}
}


/*int main()
{
	int a = 7, b = 6, c = 1;
	int* p1 = &a, * p2 = &b, * p3 = &c;
	swap_sort_ptr_addr(&p1, &p2, &p3, true);
	cout << *p1 << " " << *p2 << " " << *p3;    // Points "1 6 7"
}*/