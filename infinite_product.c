#include <stdio.h>
#include <math.h>
int main(void)
{
	int N;
	scanf("%d", &N);//am citit numarul de coordonate introdus
	long c1, c2;
	double s_a = 0, s_b = 0;
	double n_a = 0, n_b = 0;
	int maxima = -1, maxim2a = -1, maximb = -1, maxim2b = -1;
	long ps = 0;
	for (int i = 0; i < N; i++) {
		scanf("%lo", &c1); // am citit in baza 8 coordonata c1
//am aflat al 2 lea maxim al coord c1 prin if-urile de mai jos
		if (c1 == maxima) {
			maxima = maxima;
		} else if (c1 > maxima) {
			maxim2a = maxima;
			maxima = c1;
	    } else if (c1 > maxim2a) {
			maxim2a = c1;
		}
		s_a = s_a + (double)c1 * (double)c1;
		scanf("%lo", &c2); // am citit in baza 8 coordonata c2
//am aflat al 2 lea maxim al coord c2 prin if-urile de mai jos
		if (c2 == maximb) {
			maximb = maximb;
		} else if (c2 > maximb) {
			maxim2b = maximb;
			maximb = c2;
		} else if (c2 > maxim2b) {
			maxim2b = c2;
		}
		s_b = s_b + (double)c2 * (double)c2;
		ps = ps + c1 * c2;
		}
//am calculat normele prin formula normei
	n_a = sqrt(s_a);
	n_b = sqrt(s_b);
	printf("%ld\n", ps);
	printf("%d %d\n", maxim2a, maxim2b);
	printf("%.7lf %.7lf\n", n_a, n_b);
	return 0;
}
