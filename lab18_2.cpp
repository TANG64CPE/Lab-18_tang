#include<iostream>
using namespace std;

int myString(char *A,int N ){
	A = new char;    
	for(int i = 0; i < N;i++) *A = 'A'+i;
	 = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
