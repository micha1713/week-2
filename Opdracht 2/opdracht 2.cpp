// opdracht 2.cpp : This file contains the 'main' function. Program execution begins and ends there.


// bereken de grootte van enkele fundamentele datatypes

#include <stdio.h>


int main()
{
    printf("berekening van de grootte van enkele fundamentele datatypes");
    printf(" char: %3d byte \n", sizeof(char));
    printf(" short:%3d bytes\n", sizeof(short));
    printf(" int:%3d bytes\n", sizeof(int));
    printf(" long:%3d bytes\n", sizeof(long));
    printf(" unasigned:%3d bytes\n", sizeof(unsigned));
    printf(" float:%3d bytes\n", sizeof(float));
    printf(" double:%3d bytes\n", sizeof(double));
    printf(" long double:%3d bytes\n", sizeof(long double));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
