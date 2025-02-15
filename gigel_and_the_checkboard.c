#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NMAX 1000
int main(void)
{
	int n;
	scanf("%d", &n);
	int a[NMAX][NMAX];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	int l = 0;
	int c = 0;
	long miscare;
	while (a[l][c] != 0) {
		if ((l + c) % 2 == 0) {
			int z = c;						  // z=0;z=1;
			miscare = miscare + abs(a[l][c]); // miscare=1
			c = c + a[l][c];				  // c=1
			if (c < 0) {
				if (c > 1 - n)
					c = c + n;
				else
					c = n - (c * (-1) % n) % n;
			} else if (c > n - 1) {
				c = c % n;
			}
			a[l][z] = 0; // a[0][0]=0 si a[o][1]=1
		} else if ((l + c) % 2 != 0) {
			int p = l;						  // p=0;
			miscare = miscare + abs(a[l][c]); // miscare=2
			l = l + a[l][c];				  // l=1;
			if (l < 0) {
				if (l > 1 - n)
					l = l + n;
				else
					l = n - (l * (-1) % n) % n;
			} else if (l > n - 1) {
				l = l  % n;
			}
			a[p][c] = 0; // a[0][1]=0;
		}
	}
	int lfinal = n - l;
	printf("%ld\n", miscare);
	printf("%d ", lfinal);
	if (c < 26) {
		char letter = 'A' + c;
		printf("%c\n", letter);
	} else if (c < 702) {
		char letter1 = 'A' + (c - 26) / 26;
		char letter2 = 'A' + (c - 26) % 26;
		printf("%c%c\n", letter1, letter2);
	} else {
		char letter1 = 'A' + (c - 702) / 676;
		char letter2 = 'A' + ((c - 702) % 676) / 26;
		char letter3 = 'A' + ((c - 702) % 676) % 26;
		printf("%c%c%c\n", letter1, letter2, letter3);
	}

	return 0;
}
