// opdracht 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main(void) {
    long long bin;
    int dec = 0, base = 1;

    printf("Geef een binaire reeks: ");
    scanf("%lld", &bin);

    while (bin > 0) {
        int laatste = bin % 10;
        if (laatste != 0 && laatste != 1) {
            printf("Ongeldige invoer\n");
            return 1;
        }
        dec += laatste * base;
        base *= 2;
        bin /= 10;
    }

    printf("Het decimale getal is: %d\n", dec);
    return 0;
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
