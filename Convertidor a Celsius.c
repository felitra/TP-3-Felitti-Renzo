/*
 ============================================================================
 Convertidor a Celsius in C, Ansi-style
 Felitti Renzo
 26/4/2015
 ============================================================================
 */

#include <stdio.h>

float getCelsius(float far) {
	return ((far - 32) * 5) / 9;
}

int main(void) {

	const int maxValue = 300;

	for (float i = 0; i <= maxValue; i++) {
		printf("%.2f°F  ----> %.2f°C \n", i, getCelsius(i));
	}

}
