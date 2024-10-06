#include<iostream>
using namespace std;
int main()
{
	int num_1;
	cout<<"enter the first number: ";
	cin>>num_1;
	int num_2;
	cout<<"enter the second number:";
	cin>>num_2;
	int sum= num_1+num_2;
	int difference= num_1-num_2;
	int product= num_1*num_2;
	float division= num_1/num_2;
	int reminder= num_1 % num_2;
	int square_1 = num_1*num_1;
	int square_2 = num_2*num_2;
	int cube_1 = num_1*num_1*num_1;
	int cube_2 = num_2*num_2*num_2;
	cout<<"The sum of these number is "<<sum<<endl;
	cout<<"The difference of these number is: "<<difference<<endl;
	cout<<"The product of these number is: "<<product<<endl;
	cout<<"The division of these number is: "<<division<<endl;
	cout<<"The reminder of those number is: "<<reminder<<endl;
	cout<<"the square of number 1 is: "<<square_1<<endl;
	cout<<"The square of number 2 is: "<<square_2<<endl;
	cout<<"The cube of number_1 is: "<<cube_1<<endl;
	cout<<"The cube of number_2 is: "<<cube_2<<endl;
	return 0;
	
}