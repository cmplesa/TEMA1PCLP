#include <stdio.h>
int main(void)
{
	int N;
	int nr = 0;
	scanf("%d", &N);
	int x[100], c[100], v[100];
	int sinitial = 0;
	for (int i = 0; i < N; i++)
		scanf("%d", &x[i]);//am citit vectorul de note
	for (int j = 0; j < N; j++)
		scanf("%d", &c[j]);//am citit vectorul de credite
	int p_min;
	scanf("%d", &p_min);
	for (int i = 0; i < N; i++)
		sinitial = sinitial + x[i] * c[i]; //am realizat suma initiala
	for (int i = 0; i < N; i++) {
		if (x[i] < 10) {
			x[i] = 10 - x[i];
			v[i] = x[i] * c[i];
		} else if (x[i] == 10) { //am construit vectorul pentru sume
			v[i] = 0;
		}
	}
	for (int y = 0; y < N - 1; y++) {
		for (int j = 0; j < N - 1 - y; j++) {
			if (v[j] < v[j + 1]) {//am sortat vectorul de sume descrescator
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
		}
// adunam valorile vectorului v pana cand suma initiala devenea
// mai mare decat punctajul minim
	for (int i = 0; i < N; i++) {
		sinitial = sinitial + v[i];
		nr++;
		if (sinitial >= p_min)
			break;
	}
	if (sinitial < p_min) //daca nu exista solutie se afiseaza valoarea -1
		nr = -1;
	printf("%d", nr);
	return 0;
}
