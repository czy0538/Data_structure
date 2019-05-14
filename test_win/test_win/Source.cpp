#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int i = rand() % 30;
	while (i == 9||i==4||i==17)
	{
		i = rand() % 30;
	}
	cout << i << endl;
	return 0;
}
