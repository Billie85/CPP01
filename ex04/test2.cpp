#include <iostream>
using namespace std;

int main() {

	string str1 = "....-bb";
	cout << str1.replace(0,4, "zz") << endl; //zza-bb

	return 0;
}