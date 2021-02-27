#include <iostream>
#include <string>
template<typename T>
T getMaxRecur(const T* arr, size_t size) {
	// ...

	//wybor najwiekszego elementu

	T max;


	//porownujemy od ostatniego elementu


	if (arr[size - 1] > arr[size - 2]) {
		max = arr[size - 1];
	}
	else { max = arr[size - 2]; }

	size = size - 1;

	return size == 2 ? max : getMaxRecur(arr, size);


}
int main() {
	using std::cout; using std::endl; using std::string;
	double ad[]{ 2.5, 9.1, 4.5, -1.0 };
	cout << "ad: " << getMaxRecur(ad, 4) << "; ";
	int ai[]{ 2, 11, 5, 1, 9 };
	cout << "ai: " << getMaxRecur(ai, 5) << "; ";
	string as[]{ "Ala", "Ela", "Ula", "Ola" };
	cout << "as: " << getMaxRecur(as, 4) << endl;
}