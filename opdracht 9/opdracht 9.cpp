// opdracht 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main(void) {
    double dal, piek;
    double prijs_dal = 0.40;
    double prijs_piek = 0.46;
    double levering = 80.0;
    double totaal;

    printf("Geef je dalverbruik in kWh: ");
    scanf("%lf", &dal);

    printf("Geef je piekverbruik in kWh: ");
    scanf("%lf", &piek);

    totaal = dal * prijs_dal + piek * prijs_piek + levering;

    printf("De totale jaarlijkse elektriciteitskosten zijn: €%.2f\n", totaal);

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
