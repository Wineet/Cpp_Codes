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

typedef struct demo_s{
	int var1;
	char char2;
}demo_struct;


int  main(int argc,char *argv[])
{
	int my_var=0;
	char name[10]={0};

	cout<<"Dynamic Memory Allocation Experiment"<<endl;

	int *ptr_int=nullptr;
	ptr_int = new int;
	if(!ptr_int)
	{
		cout<<"Failed"<<errno<<endl;
		return EXIT_FAILURE;
	}
	char *ptr_arr = new char[10];					// allocating 10 bytes of memory array
	if(!ptr_arr)
	{
		cout<<"Failed"<<errno<<endl;
		delete ptr_int;
		return EXIT_FAILURE;
	}

	demo_struct *s_ptr = nullptr;
	s_ptr = new struct demo_s;					// Allocating Struct memory
	if(!s_ptr)
	{
		cout<<"Failed"<<errno<<endl;
		delete[] ptr_arr;
		delete ptr_int;
		return EXIT_FAILURE;
	}


		delete[] ptr_arr;
		delete ptr_int;
		delete s_ptr;

	cout<<"Program End"<<endl;	


return 0;
}
