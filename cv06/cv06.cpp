// cv06.cpp: Definuje vstupní bod pro aplikaci.
//

#include "cv06.h"
#include "ctype.h"

using namespace std;

int pocet_pismen(char* text) {
	int pocet_pismen = 0;

	for (int x = 0; text[x] != '\0'; x++) {
		if (isalpha(text[x])) {
			pocet_pismen++;
		}
	}
	return pocet_pismen;

}


int pocet_cislic(char* text) {
	int pocet_cislic = 0;
	
	for (int x = 0; text[x] != '\0'; x++) {
		if (isdigit(text[x])) {
			pocet_cislic++;
		}
	}
	return pocet_cislic;

}


int main()
{
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

	printf("Pocet pismen: %d\n", pocet_pismen(text));
	printf("Pocet cisel: %d\n", pocet_cislic(text));
	return 0;
}
