#include<iostream> // FIBONACCI RECURSIV

using namespace std;
int n;
int fibo(int n);
int main()
{
int i;
cout<<"n= ";
cin>>n;
for (i=1;i<=n;i++)
cout<<fibo(i)<<" ";
cout<<endl;
cout<<"al "<< n<<" -lea numar al sirului lui Fibonacci e "<<fibo(n);
}

int fibo(int n)
{if(n==1||n==2)
return 1;
else
return fibo(n-1)+fibo(n-2);
}
