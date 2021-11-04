#include <iostream>
using namespace std;

void create(int* a,const int n)
{
	for (int i = 0; i <=n; i++)
	{
		a[i] = -35 + rand() % (61);
		cout << a[i] << " ";
	}
}
void sumandquantity(int* a,const int n,int &S, int &q)
{
	for (int i = 0; i <= n; i++)
	{
		if (a[i] > 0)
		{
			S += a[i];
			a[i] = 0;
			q += 1;
		}
		else if ((-a[i])%2==1)
		{
			S += a[i];
			a[i] = 0;
			q += 1;
		}
	}
		
}

void show (int* a, int S, int kil, int n)
{
	for (int i = 0; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout <<endl<< "Sum=" << S << endl;
	cout << "Quantity=" << kil << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 26;
	int c[n+1];
	int S = 0, kil = 0;

	create(c, n);
	sumandquantity(c, n, S, kil);
	cout << endl;
	show(c, S, kil, n);

	return 0;
}
