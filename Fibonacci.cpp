#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int f0 = 0;
	int f1 = 1;
	int f2;
	int bound;
	
	cout<<"Enter the bound number:"<<endl;
	cin>>bound;
	
	cout<<f0<<'\t'<<f1<<'\t';
	while ( true )
	{
		f2 = f0 + f1;
		if ( f2 > bound ) break;
		cout<<f2<<'\t';
		f0 = f1;
		f1 = f2;
	}
}
