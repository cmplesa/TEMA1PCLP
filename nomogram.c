#include <stdio.h>

int verificare(int N, int M, int nresl[100], int resl[100],
			   int nresc[100], int resc[100], int grid[100][100])
{
	int c3 = 0;
for (int i = 0; i < N; i++) {
	int j = 0;
	while (j < M) {
		int maxim = 0;
	while (grid[i][j] == 0 && j < M)
		j++;
	int numarare = 0;
	while (grid[i][j] == 1 && j < M) {
		j++;
		numarare++;
	}
	if (numarare != 0 && nresl[i] <= maxim)
		return 0;
	if (numarare != 0 && resl[c3] == numarare) {
		c3++;
		maxim++;
	}
	if (numarare != 0 && resl[c3 - 1] != numarare)
		return 0;

	j++;
	}
}

	int c4 = 0;
for (int j = 0; j < M; j++) {
	int i = 0;
	while (i < N) {
		int maxim2 = 0;
	while (grid[i][j] == 0 && i < N)
		i++;

	int numarare2 = 0;
	while (grid[i][j] == 1 && i < N) {
		i++;
		numarare2++;
	}
			if (numarare2 != 0 && nresc[j] <= maxim2)
				return 0;
	if (numarare2 != 0 && resc[c4] == numarare2) {
		c4++;
		maxim2++;
	}

	i++;
	}
}

	return 1;
}

int main(void)
{
	int T;
	int grid[100][100];
	scanf("%d", &T);
for (int i = 0; i < T; i++) {
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			grid[i][j] = 0;

int N, M;
	int contor1 = 0;
	int contor2 = 0;
	scanf("%d %d", &N, &M);
	int nresl[10000];
	int resl[10000];
	int nresc[10000];
	int resc[10000];
	for (int i = 0; i < N; i++) {
		scanf("%d", &nresl[i]);
	for (int j = 0; j < nresl[i]; j++)
		scanf("%d", &resl[j + contor1]);
	contor1 = contor1 + nresl[i];
	}
	for (int i = 0; i < M; i++) {
		scanf("%d", &nresc[i]);
	for (int j = 0; j < nresc[i]; j++)
		scanf("%d", &resc[i + contor2]);

	contor2 = contor2 + nresc[i];
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%d", &grid[i][j]);
	if (verificare(N, M, nresl, resl, nresc, resc, grid))
		printf("Corect\n");
	else
		printf("Eroare\n");
	}
	return 0;
}
