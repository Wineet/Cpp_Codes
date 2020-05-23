/*
 * Author:   vinit 
 * Task:     Demonstrate Reference Concept
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

	int x=10;
	int z=10;

	/*
	 * Leaving reference as uninitilised Will show below compiler error
	 * Declared Referenced but not initilised
	 *
	 * */
	//int &y;
	
	int &y=x;				// Assigning Reference

	/*Trying to change referenc 
	 * Compiler will show below Error]
	 *  lvalue required
	 * As reference nothing but address of variable so it is just a aliased name
	 */
	
	//&y=z;				


	cout<<"&y= "<<y<<endl;



return 0;
}
