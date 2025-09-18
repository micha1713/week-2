// opdracht 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double discriminant, x1, x2;

    printf("Geef a: ");
    scanf("%lf", &a);

    printf("Geef b: ");
    scanf("%lf", &b);

    printf("Geef c: ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("Er zijn geen actuele oplossingen.\n");
    }
    else {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Oplossing x1 = %.2f\n", x1);
        printf("Oplossing x2 = %.2f\n", x2);
    }

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
