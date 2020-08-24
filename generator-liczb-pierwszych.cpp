#include <iostream>
#include <string>
using namespace std;

bool pierwsza(int liczba)
{
	if (liczba == 0 || liczba == 1)
		return false;
	else if (liczba == 2)
		return true;
	else if (liczba % 2 == 0)
		return false;

	for (int i = 3; i < liczba; i += 2)
	{
		if (liczba % i == 0)
			return false;
	}
	return true;
}
void test()
{
	if (pierwsza(1) != false) std::cout << "1 not ok" << std::endl;
	if (pierwsza(2) != true) std::cout << "2 not ok" << std::endl;
	if (pierwsza(3) != true) std::cout << "3 not ok" << std::endl;
	if (pierwsza(4) != false) std::cout << "4 not ok" << std::endl;
	if (pierwsza(5) != true) std::cout << "5 not ok" << std::endl;
}
int main()
{
	cout << "Generator liczb 1.wszych.\n";
	test();
	for (int liczba = 0; liczba < 50; liczba++)
	{
		if (pierwsza(liczba) == true)
			cout << liczba << "\t";
	}
}