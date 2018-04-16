#include <iostream>
using namespace std;
unsigned long long int fact2(int n);
int main() 
{
	int n;
	cout<<"n= ";
	cin>>n;
	cout<< n<< " factorial este "<<fact2(n);
	
}
unsigned long long int fact2(int n)
{
	
int i;
unsigned long long int c=1;
for(i=1;i<=n;i++)
c*=i;
return c;
}
