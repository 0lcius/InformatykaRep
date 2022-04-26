
#include <iostream>
using namespace std;

void Fib(int F);
int main()
{
	int N;
	cout << "Podaj N";
	cin >> N;
	Fib(N);
}

void Fib(int F)
{
	int f0 = 0;
	int f1 = 1;
	int f;
	
	for (int i = 0; i < F; i++) {
		if (i > 1) {
			f = f0 + f1;
			f0 = f1;
			f1 = f;


		}
		else f = i;
		cout << f;
		cout << " ";
	}



}
