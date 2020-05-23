/*
 * Author:   vinit 
 * Task:     --Here--
 * Hw  : 	   R-pi 3B+
 * Platform: Linux
 *
 */


#include<iostream>
#include<string>


using namespace std;

template <class T>



/*Function Declaration Here*/


/*Global Variable Here*/



/*Class Here*/

class Rectangle{

	private: 
		T length;
		T breadth;

	public:
		void set_length(T len)
		{
			length=len;
		}
		void set_breadth(T bre)
		{
			breadth=bre;
		}

		T get_length()
		{
			return length;
		}
		T get_breadth()
		{
			return breadth;
		}

		T area()
		{
			return length*breadth;
		}

};


int  main(int argc,char *argv[])
{

	cout<<"Class Demo"<<endl;
	
	Rectangle<int> r1;

  /*  r1 is an object of class rectangle 
   */
    
	


return 0;
}
