/*
 * Author:   vinit 
 * Task:     Find out the missing Number from 1-10 entered by user
 * 	     Try to get less time Complexity
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


int  main(int argc,char *argv[])
{


/* Method without sorting array Nesting Of loops
 * It will find out all missing Numbers
 * */
	int user_ip[10]={1,4,4,3,6,5,7,9,10};
	cout<<"Enter 10 Numbers"<<endl;
#if 0	
	// Kept it only for debugging Purpose
	for(int i=0;i<10;i++)
	{
		cin>>user_ip[i];
	}
	for(int &x:user_ip)
	{
		cout<<" "<<x;
	}
#endif


	int i=0,j=0;
	for(i=0;i<10;i++)
	{
		for( j=0;j<10;j++)
		{
			if(i == user_ip[j])
			{
				j=12;	// Break inner Loop
			}
		
		}
		if(j==10)
		{
			cout<<"Missing No ="<<i<<endl;
		}
	}




return 0;
}
