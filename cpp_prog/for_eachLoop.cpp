/*
 * Author:   vinit 
 * Task:     --Here--
 * Hw  : 	   R-pi 3B+
 * Platform: Linux
 *
 */


#include<iostream>


using namespace std;


/*Function Declaration Here*/


/*Global Variable Here*/


int  main(int argc,char *argv[])
{

	int arr[5]={1,4,54,32,2};
	cout<<"For Each loop Demo"<<endl;
	int sum=0;
	for( int x: arr)
	{
		sum+=x;
	
	//	cout<<"Total Sum= "<<sum<<endl;
	}
		cout<<"Total Sum= "<<sum<<endl;
/*---- Write code here ---*/


return 0;
}
