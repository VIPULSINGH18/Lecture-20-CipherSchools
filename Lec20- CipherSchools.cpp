// address of data type are stored in hexadecimal

#include<iostream>
using namespace std;
int main(){
	int a;
	long long int b;
	float c;
	char d;
	cout<<"Size of int a: "<<sizeof(a)<<"  "<<"Address of int a: "<<&a<<endl;
	cout<<"Size of long long int b: "<<sizeof(b)<<"  "<<"Address of long long int b: "<<&b<<endl;
	cout<<"Size of float c: "<<sizeof(c)<<"  "<<"Address of float c: "<<&c<<endl;
	cout<<"Size of char d: "<<sizeof(d)<<"  "<<"Address of char d: "<<&d<<endl;
	return 0;
}
