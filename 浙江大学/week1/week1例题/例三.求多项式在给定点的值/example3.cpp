#include<bits/stdc++.h>
#include<Time.cpp>
constexpr auto MAXN = 10000000;
using namespace std;
Time T1,T2;
double f2(int n, double a[], double x);
double f1(int n, double a[], double x);

int main()
{
	double n;
	cin >> n;
	double a[9];
	for (int i = 0; i < 9; ++i)
		a[i] = (double)i;
	T1.start();
	for(long long i=0;i<MAXN;++i)
	f1(9,a,n);
	T1.stop();

	T2.start();
	for (long long i = 0; i < MAXN; ++i)
	f2(9, a, n);
	T2.stop();

	return 0;
}
double f1(int n, double a[], double x)
{
	int i;
	double p = a[0];
	for (i = 1; i <= n; ++i)
	{
		p+=(a[i] * pow(x, i));
	}

	return p;
}

double f2(int n, double a[], double x)
{
	double p = a[n];
	for (int i = n; i > 0; --i)
	{
		p = a[i - 1] + x * p;
		return p;
	}
}