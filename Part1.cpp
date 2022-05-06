// Kumar Dheeraj - VXC7Y1 -
// Chapter 17 - Part 1 Drills 

#include "std_lib_facilities.h"


int printArray10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i){
		os << "Value of  " << i << " is : " << a[i] << endl;
    }
    return 0;
}

void print_vector(ostream& os, vector <int>& v )
{
	for (int i :v){
		os << i << " " << endl;
	}
}

void printArray(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i){
		os << "Int " << i << ": " << a[i] << endl;
	}
}
int main()
{
	// drill 1
	int* array1 = new int[10];
	
	// drill 2
	for (int i = 0; i < 10; ++i)
		cout << "Value of " << i << " is : " << array1[i] << endl;

	// drill 3
	//delete[] array1;

	// drill 4
	
	printArray10(cout, array1);
	delete[] array1;

	// drill 5
	int* array12 = new int[10]{ 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 };
	printArray10(cout, array12);
	delete[] array12;

	// drill 6 + 7
	int* intArray = new int[11]{ 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110 };
	printArray(cout, intArray, 11);
	delete[] intArray;

	// drill 8
    int *twentyInts = new int[20]{ 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119 };
	printArray(cout, twentyInts, 20);
	delete[] twentyInts;

	// drill 10
	vector<int> v10;
    v10 = { 100,101,102,103,104,105,106,107,108,109 };
	print_vector(cout, v10);

	vector<int> v11;
    v11 = { 100,101,102,103,104,105,106,107,108,109,110 };
	print_vector(cout, v11);

	vector<int> v20;
    v20 = { 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119 };
	print_vector(cout, v20);
	
	return 0;
}