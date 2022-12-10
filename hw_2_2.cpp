#include <string.h>
#include <iostream>
using namespace std;


int main() {
	
	char str[100];
	string str1;
	string str2;
	cout<<"Enter any string first ::  ";
	gets(str);
	str2=str;
	cout<<"Enter Substring u want to Search ::  ";
	cin>>str1;
	int pos=str2.find(str1);
	pos++;
	cout<<"The substring [ "<<str1<<" ] is present in given string at position [ "<<pos<<" ]";
	
	
	
	return 0;
}
