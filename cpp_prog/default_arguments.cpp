/*
 * Author:   vinit 
 * Task:     Default argument Demo
 * Hw  : 	   R-pi 3B+
 * Platform: Linux
 *
 */



#include<iostream>


using namespace std;

template <class T>
/*
 * Z is default argument is here if no third argument is passed
 * then z value is considered to be 5
 * if argument is passed then z value is considered to whatever
 * is passed
 *
 * */

T add(T x,T y,T z=5)
{
	return x+y+z;

}

/*Global Variable Here*/


int  main(int argc,char *argv[])
{
	cout<<"add(1,2) = "<<add(1,2)<<endl;
	cout<<"add(1,2,3) = "<<add(1,2,3)<<endl;


return 0;
}
