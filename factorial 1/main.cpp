#include <iostream>
using namespace std;
unsigned long long int fact( int n);
int main() 
{
 int n;
	cout<<"n= ";
	cin>>n;
	cout<<endl;
	cout<<n<<" factorial= "<<fact(n);
}
unsigned long long int fact( int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
