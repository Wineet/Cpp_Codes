/*
 * Author:   vinit 
 * Task:     Template Function Demo
 * Hw  : 	   R-pi 3B+
 * Platform: Linux
 *
 */


#include<iostream>


using namespace std;

template<class TEM>

/*Function Declaration Here*/
//T add(T x, T y);
TEM add(TEM x, TEM y)
{
	return x+y;
}

/*Global Variable Here*/


int  main(int argc,char *argv[])
{

	cout<<"add(1,2)"<<add(1,2)<<endl;
	cout<<"add(1.5,2.5)"<<add(1.5,2.5)<<endl;
	cout<<"add(2.4f,5.6f)"<<add(2.4f,5.6f)<<endl;


return 0;
}

/*

T add(T x, T y)
{
	return x+y;
}
*/
