#include <iostream>
using namespace std;



/* 
	Variadics is a way of passing a function patterns of parameters

*/

template <typename T>
T adder(T only) {
	std::cout << __PRETTY_FUNCTION__ << "\n";
	return only;
}

template <typename T, typename... Ts>
T adder(T first, Ts... rest) {
	std::cout << __PRETTY_FUNCTION__ << "\n";
	return first + adder(rest...);
}






int main () {
	cout << "Let's try some Variadics in C++" << endl;
	int ans = adder(1, 2, 3, 4, 5);
	cout << "Result = " << ans << endl;
	return 0;
}

