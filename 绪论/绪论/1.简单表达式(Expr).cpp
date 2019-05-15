#include<iostream>
#include<string>
using namespace std;
using LL=long long;
int main()
{
	LL a, b;
	char c;
	cin >> a >> c >> b;
	switch (c)
	{
	case '+':
		cout<<a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout<<a* b;
		break;
	}
	
	return 0;
	
}