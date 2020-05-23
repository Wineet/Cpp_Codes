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
	int add(int x,int y);
	int add(int x,int y,int z);
/*
 * On Return type difference of function will not help in function 
 * overloading
 * for function overloading in cpp number of arguments or it's data
 * type should be different
 * Other wise compiler will show error it will conflict with the name
 *
 * */
//	float add(int x,int y);


/*Global Variable Here*/


int  main(int argc,char *argv[])
{

	cout<<"add(3,4) = "<<add(3,4)<<endl;
	cout<<"add(1,2,3) = "<<add(1,2,3)<<endl;


return 0;
}


int add(int x,int y)
{
	return (x+y);
}

int add(int x,int y,int z)
{
	return (x+y+z);
}
