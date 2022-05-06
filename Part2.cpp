// Kumar Dheeraj - VXC7Y1 -
// Chapter 17 - Part 2 Drills 
#include "std_lib_facilities.h"

// driver function
int main()
{
	// drill 1
	int n = 7;
	int* p1 = &n;

	// drill 2
	cout << "n: " << n << "	p1: " << p1 << endl;
	
	// drill 3
	int sevenInts [7] = { 1,2,4,8,16,32,64 };
	int* p2 = sevenInts;

	// drill 4
	cout << "p2 :" << p2 << endl;
	cout << "Array in p2 : " << endl;
	for (int i = 0;i < 7;i++)
		cout << p2[i] << " " << endl;

	// drill 5
	int* p3 = p2;
	// drill 6
	p2 = p1;
	// drill 7
	p2 = p3;

	// drill 8
	cout << "p1 :" << p1 << endl;
	cout << "p1 points to :" << *p1 << endl;
	cout << "p2 :" << p2 << endl;
	cout << "p2 points to:" << *p2 << endl;

	// drill 9

	// drill 10
	int tenInts[10] = { 1,2,4,8,16,32,64,128,256,512 };
	p1 = tenInts;

	// drill 11
	int tenInts2[10] = { 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = tenInts2;

	// drill 12
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

	// drill 13
	vector<int> vec1{ 1,2,4,8,16,32,64,128,256,512 };
	p1 = &vec1[0];
	
    vector<int> vec2{ 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = &vec2[0];
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];
	return 0;
}