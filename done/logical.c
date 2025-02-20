#include "stdio.h"


int logical(int x) {

	if (1 == x) return 1;
	else return (x + logical(x - 1));

}


int main() {

	int result = logical(3);

	printf("%d\n", result);

}
