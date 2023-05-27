/*
 *  Author: Matt Johnson
 *  Subject: arrays
 *  Purpose:
 *  Date: 05/27/2023 
 * 
 */

#include <iostream>

using namespace std;

int main(void) {
    
    const int rows{3};
    const int cols{4};
    
    double movie_rating[rows][cols];
    
    cout << "What is the first movie rating (out of 5 stars): " << endl;
    cin >> movie_rating[0][0];
    
    cout << "\nThe first movie rating located at [0][0] is: " << movie_rating[0][0] << endl;
    
    return 0;
}
