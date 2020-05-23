/*
 * Author:   vinit 
 * Task:     Demo for class creation
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
		void set_length(int len)
		{
			length=len;
		}
		void set_breadth(int bre)
		{
			breadth=bre;
		}

		int get_length()
		{
			return length;
		}
		int get_breadth()
		{
			return breadth;
		}

		int area()
		{
			return length*breadth;
		}

};


int  main(int argc,char *argv[])
{

	cout<<"Class Demo"<<endl;
	
	Rectangle r1;

  /*  r1 is an object of class rectangle 
   *  r1 object is got created in stack and
   *  it has size equal to sum of all data members
   *  If no padding */

	r1.set_length(15);
	r1.set_breadth(10);
	cout<<"length "<<r1.get_length()<<endl;
	cout<<"breadth "<<r1.get_breadth()<<endl;
	cout<<" Area= "<<r1.area()<<endl;

	/* pointer to Object  */
	Rectangle *ptr2;
	ptr2=&r1;
	ptr2->set_length(2);
	ptr2->set_breadth(4);
	cout<<"length "<<ptr2->get_length()<<endl;
	cout<<"breadth "<<ptr2->get_breadth()<<endl;
	cout<<" Area= "<<ptr2->area()<<endl;
	



	/*  Object of class in Heap memory*/

	Rectangle *ptr = new Rectangle;

	/* In this scenario *ptr pointer is created
	 * and Head memory also allocated to it 
	 * Like wise object creation happend in heap
	 * and pointer is returned for operation*/

	ptr->set_length(10);
	ptr->set_breadth(10);
	cout<<"length "<<ptr->get_length()<<endl;
	cout<<"breadth "<<ptr->get_breadth()<<endl;
	cout<<" Area= "<<ptr->area()<<endl;



	delete ptr;		
	/*To avoide memory Leak Heap memory 
	 * deleting heap memory after complete
	 * operation*
	 *
	 */



return 0;
}
