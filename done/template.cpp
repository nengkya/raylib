#include "iostream"


template <typename T>  T myMax(T x, T y) {

	return (x > y) ? x : y;

}


int main() {

	/*character out*/
	std::cout << myMax<int>(4, 10) << std::endl;

}
