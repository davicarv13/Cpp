#include "iostream"
#include <stdlib.h>

using namespace std;

int fatorial(int num);

int main(){

	int num;

	cout << "Informe um numero:" ;
	cin >> num;

	cout << "Fatorial de:"<< num <<":" << fatorial(num);
}

int fatorial(int num){
	if(num==1){
		return 1;
	}
	return num*fatorial(num-1);
}