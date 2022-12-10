 #include <iostream>
#include <string.h>


using namespace std;
struct NUMBERLIST {
	string str;
	int ar[10];
	
	
};
void func(NUMBERLIST& w) {
	int i,sum=0;
	string str1="left-to-right";
	string str2="right-to-left";
	
	if(w.str==str1) {
	
	for(i=1;i<10;i++) {
		w.ar[i]=w.ar[i]+w.ar[i-1];
	}
}
	
	
	else if (w.str==str2) {
		for(i=9;i>=0;i--) {
			w.ar[i-1]=w.ar[i-1]+w.ar[i];
		}
	}
	cout<<"Result: ";
	for(i=0;i<10;i++) {
		cout<<w.ar[i]<<" ";
	}
}

int main() {
	
	NUMBERLIST numbers;
	int j;
	cout<<"Enter 10 integers and order of summation: ";
	for(j=0;j<10;j++) {
		cin>>numbers.ar[j];
	}
	cin>>numbers.str;
	
	func(numbers);	
	
	
	
	
	
	
	
	
	return 0;
}
