#include <iostream>


using namespace std;

int main(){
	
	long int num1, num2;
	while(cin>>num1>>num2){
		num1<num2?	
		cout<<num2-num1<<endl : cout<<num1 - num2<<endl;
	}
	return 0;
}
