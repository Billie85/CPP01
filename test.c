#include <iostream>
#include <string>

int main(void)
{
	int x = 10;
	int y = 20;

// Pointer
int *ptr = &x; // ptrがxのアドレスを指す
std::cout << "Pointer Value: " << *ptr << std::endl; // Pointer Value: 10
ptr = &y; // ptrがyのアドレスを指す
std::cout << "Pointer Value: " << *ptr << std::endl; // Pointer Value: 20

// Reference
int &ref = x; // refがxの別名を持つ
std::cout << "Reference Value: " << ref << std::endl; // Reference Value: 10
ref = y; // xの値もyに変更される
std::cout << "Reference Value: " << ref << std::endl; // Reference Value: 20

}
/* 
#include <iostream>
#include <string>

int main(void)
{
	int x = 10;
	int y = 20;

// Pointer
int *ptr = &x;
std::cout << "Pointer Address: " << ptr << std::endl; // Pointer Address: 0x7ffd5b5b5b5b
std::cout << "Pointer Value: " << *ptr << std::endl; // Pointer Value: 10

// Reference
int &ref = x;
std::cout << "Reference Address: " << &ref << std::endl; // Reference Address: 0x7ffd5b5b5b5b
std::cout << "Reference Value: " << ref << std::endl; // Reference Value: 10

} */