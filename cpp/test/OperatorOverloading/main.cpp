#include "point.h"

int main(void) {

	Point* one = new Point(3, 4);
	Point two(4, 5);
	two = *one * two;

	cout << two;

	delete one;


	return 0;
}