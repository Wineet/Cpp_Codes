
/*
 * Author:   vinit 
 * Task:     String Reverse Code
 * Hw  : 	   R-pi 3B+
 * Platform: Linux
 *
 */


#include<iostream>
#include<string>
#include<cstring>


using namespace std;


/*Function Declaration Here*/


/*Global Variable Here*/


int main(int argc,char *argv[])
{
	char user_ip[20]={0};
	char rev_str[20]={0};

	cout<<"Input string"<<endl;
	if(NULL == fgets(user_ip,20,stdin))
	{
		cout<<"fgets Error.."<<endl;
		exit(EXIT_FAILURE);
	}
	
	// FInd Out String Length
	 int str_len=0;
	while(user_ip[str_len] != 0)
	{
		str_len++;

	}
	str_len--;	//ignoring Null char
	//cout<<"String Length"<<str_len<<endl;
	for(int i=0;i<str_len;i++)
	{
		rev_str[str_len-i-1]=user_ip[i];
		cout<<rev_str[str_len-i]<<endl;
	}
	cout<<"Input String "<<user_ip<<endl;
	cout<<"Rev String "<<rev_str<<endl;
return 0;
}
