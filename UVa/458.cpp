#include<iostream>
#include<string>

using namespace std;

int main(){
	string m;
	char c;
	while (getline(cin, m)){
		for(int i = 0; i < m.size(); i++){
			c = m[i] -7;
			cout << c;
		}
		cout << endl;
	}
	return 0;
}

