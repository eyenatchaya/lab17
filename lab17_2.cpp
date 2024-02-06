#include<iostream>
using namespace std;

void myString(char *&M,int N){
	M = new char[N];    
	for(int i = 0; i < N;i++) M[i] = 'A'+i;
	M[N] = 0;
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
