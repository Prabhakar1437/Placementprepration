#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i = 2 ;
	int sum = 0;
	
	while(i<=n)
	{
		cout<<i<<" "<<endl;
		sum = sum + i ;
		i = i +2;
		
		
	}
	cout<<"Value of all even no is :"<<sum<<endl;
}
