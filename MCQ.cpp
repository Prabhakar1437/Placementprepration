#include<iostream>
using namespace std;
int main()
{
	/*
	int a = 1;
	int b = 2;
	
	if(a--> 0 && ++b > 2){
		cout<<"Stage1- Inside If ";
	}
	else{
		cout<<"Stage2 -  Inside else ";
	}
	cout<< a<<" "<<b<<endl;

	int number = 3;
	cout<< (25 * (++ number));
	*/
	int a = 1;
	int  b = a++;
	int c = ++a;
	cout<< b;
	cout<< c;
}