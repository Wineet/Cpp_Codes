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


/*Function Declaration Here*/


/*Global Variable Here*/


int  main(int argc,char *argv[])
{
	/*
	 * Here String is a class and str is an object of string class which will have many menber function
	 *
	 * */

	string str;
	str="Vinit";

	cout<<"-------- Basic Informational function call ----- "<<endl;
	cout<<str<<endl;
	cout<<"str.size() = "<<str.size()<<endl;		//.size() member function of string class
	cout<<"str.length() = "<<str.length()<<endl;		//.length same function as size
	cout<<"str.resize(10) = "<<endl;			//to resize the buffer
	str.resize(10);						
	cout<<"After resize str.size() = "<<str.size()<<endl;		//.size() member function of string class
	cout<<"str.capacity() = "<<str.capacity()<<endl;	// current capacity of string buffer
	cout<<"str.max_size() = "<<str.max_size()<<endl;	// max size which can be allocated by compiler
	cout<<"str.empty() = "<<str.empty()<<endl;		// check weather string is empty or not
	cout<<"str.erase() = "<<str.erase()<<endl;		// to erase string
	cout<<"After Erase str.empty() = "<<str.empty()<<"\n"<<endl;		// check weather string is empty or not
	
	cout<<"---------- Stirng Editing Function call --------"<<endl;
	str="vinit";
	cout<<"Current String >> "<< str <<endl;
	cout<<"str.compare(\"vinit\") "<<str.compare("vinit")<<endl;
	cout<<"str.compare(\"Vinit\") "<<str.compare("Vinit")<<endl;

	str.push_back('M');
	cout<<"After str.push_back('M') = "<<str<<endl;
	str.pop_back();
	cout<<"After str.pop_back() = "<<str<<endl;
	string str2="Asmuth";
	cout<<"string str2=\"Asmuth\" "<<endl;

	str.swap(str2);							// swap string object content
	cout<<"After str.swap(str2) = "<<str<<endl;
	cout<<"After str.swap(str2) str2 = "<<str2<<endl;

	str.insert(0,"Hi ");						// Insert content at perticular location
	cout<<"After str.insert(0,\"Hi \") = "<<str<<endl;
	str.replace(0,2,"Hey");
	cout<<"str.replace(0,2,\"Hey\") = "<<str<<endl;			// replce start to end position content
	str.append(" Good Day");
	cout<<"str.append(\" Good Day\"); = "<<str<<endl;		// Append to current string object

	cout<<"str.find('G') = "<<str.find('G')<<endl;			// Find First occurance from left
	cout<<"str.rfind('G') = "<<str.rfind('o')<<endl;		// Find First occurance from right

	
	cout<<"\n\n Done  Bye...."<<endl;
	

return 0;
}
