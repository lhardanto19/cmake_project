#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add( T a, T b) {
	return a + b;
}

int main() {
	std::cout << "Hellow world" << std::endl;
	std::cout << "The Tambah" << add(7,5) << std.endl;
return 0;
}