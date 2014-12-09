// HARJOITUS 15
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;
void main()
{
	char mjono[17 + 1];
	cout << "Anna 17 merkkinen jono ilman valeja: ";
	cin >> mjono;
	cout << mjono << endl << endl;

	//a) kohta
	int ind;
	for (ind = 16; ind >= 0; ind--)
		cout << mjono[ind];
	cout << endl;

	//b) kohta
	char mjono2[17 + 1];
	int i, j;
	for (i = 0, j = 16; j >= 0; i++, j--)
		mjono2[i] = mjono[j];
	mjono2[i] = '\0';
	cout << mjono2;

	//c) kohta
	cout << endl << endl;
	char mjono3[100 + 1];
	char mjono4[100 + 1];
	int mpituus;
	cout << "Anna merkkijono (max 100 kirjainta): ";
	cin.get();
	cin.get(mjono3, 100 + 1);
	cout << mjono3 << endl;
	int ind2;
	for (ind2 = 0; mjono3[ind2] != '\0'; ind2++)
		;
	cout << "Pituus: " << ind2 << endl;
	mpituus = ind2;
	int a, b;
	for (a = 0, b = mpituus - 1; b >= 0; a++, b--)
		mjono4[a] = mjono3[b];
	mjono4[a] = '\0';
	cout << mjono4 << endl;
	if (strcmp(mjono3, mjono4) == 0)
		cout << "Palidromi!" << endl;
	else
		cout << "No luck!" << endl;

}