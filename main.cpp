#include <iostream>

using std;

int suma(int a, int b);
int division(int a, int b);



int main(){
	cout<<"Version 1.0.0\n";

	cout<<"La suma de los valores es "<<suma(3,4)<<endl;


	return 0;
}

int suma(int a,int b){
	int result;

	result=a+b;

	return result;
}

int division(int a, int b){
	int result;

	result=a/b;

	return result;
}