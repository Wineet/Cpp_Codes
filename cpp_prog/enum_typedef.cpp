/*
 * Author:   vinit 
 * Task:     --Here--
 * Hw  : 	   R-pi 3B+
 * Platform: Linux
 *
 */


#include<iostream>


/*Function Declaration Here*/


/*Global Variable Here*/


int  main(int argc,char *argv[])
{

	 bool stat;		// bool data tyep
	 stat=true;
	
	typedef enum{MON=0,TUE,WED}day_t;
	day_t day_e;
	//day_e=1;		// Will produce Compiler Error 
	day_e = (day_t)1;	// Type casting can solve the probelm
	day_e=TUE;		// Only enum values can be assigned
/*---- Write code here ---*/


return 0;
}
