/*
 * Author:   vinit 
 * Task:     Demo for class creation  with  default arguments
 * Hw  : 	   R-pi 3B+
 * Platform: Linux
 *
 */


#include<iostream>
#include<string>


using namespace std;

//template <class template_t>





/*Function Declaration Here*/


/*Global Variable Here*/



/*Class Here*/

class Rectangle{

	private: 
		int length;
		int breadth;

	public:
		
	int area(int length=1,int breadth=2);

};


int  main(int argc,char *argv[])
{

	Rectangle r1;

	cout<<"Class Demo 2 "<<endl;
	cout<<" Area= "<<r1.area()<<endl;



return 0;
}


	int Rectangle::area(int length ,int breadth )
	{
			return length*breadth;
	}
