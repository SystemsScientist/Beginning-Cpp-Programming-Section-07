/*
 * Author: Matt Johnson
 * Subject: arrays and vectors
 * Purpose: illustrates section challenge solution
 * Date: 05/29/2023
 *
 * Instructions:
 *
 * 	See instructions below.
 */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	// Declare 2 empty vectors of integers named vector1 and vector2, respectively
	vector <int> vector1;
	vector <int> vector2;

	// Add 10 and 20 to vector1 dynamically using push_back
	vector1.push_back(10);
	vector1.push_back(20);

	// Display the elements in vector1 using the at() method as well as its size using the size() method
	cout << "The vector1 elements are: " << vector1.at(0) << " and " << vector1.at(1) << endl;
	cout << "The size of vector1 is: " << vector1.size() << endl;

	// Add 100 and 200 to vector2 using the at() method as well as its size using the size() method
	vector2.push_back(100);
	vector2.push_back(200);
	
	// Display the elements in vector2 using the at() method as well as its size using the size() method
	cout << "\nThe vector2 elements are: " << vector2.at(0) << " and " << vector2.at(1) << endl;
	cout << "The size of vector2 is: " << vector2.size() << endl;

	// Declare an empty 2D vector called vector_2d
	vector <vector <int>> vector_2d;

	// Add vector1 to vector_2d dynamically using push_back
	vector_2d.push_back(vector1);

	// Add vector2 to vector_2d dynamically using push_back
	vector_2d.push_back(vector2);

	// Display the elements in vector_2d using the at() method
	cout << "\nThe vector_2d elements for vector1 are: " << vector_2d.at(0).at(0) << " and " << vector_2d.at(0).at(1) << endl;
	cout << "The vector_2d elements for vector2 are: " << vector_2d.at(1).at(0) << " and " << vector_2d.at(1).at(1) << endl;

	// Change vector1.at(0) to 1000
	vector1.at(0) = 1000;

	// Display the elements in vector_2d again using the at() method
	cout << "\nThe vector_2d elements for vector1 are: " << vector_2d.at(0).at(0) << " and " << vector_2d.at(0).at(1) << endl;
	cout << "The vector_2d elements for vector2 are: " << vector_2d.at(1).at(0) << " and " << vector_2d.at(1).at(1) << endl;

	// Display the elements in vector1
	cout << "\nThe vector1 elements are: " << vector1.at(0) << " and " << vector1.at(1) << endl;

	cout << endl;
	return 0;
}
