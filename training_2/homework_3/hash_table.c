#include <stdio.h>

#if 0
int shortest_line_index(int lines[], int size) {
	int shortest = 0;

	for (int i = 1; i < size; i++) {
		if (lines[i] < lines[shortest]) {
			shortest = i;
		}
	}
	return shortest;
}

void solve(int lines[], int size, int m) {
	for (int i = 0; i < m; i++) {
		int shortest = shortest_line_index(lines, size);
		lines[shortest]++;
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", lines[i]);
	}
	printf("\n");
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int lines[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &lines[i]);
	}
	solve(lines, n, m);

	return 0;
}
#endif

int identical_right(int snow1[], int snow2[], int start) {
	for (int offset = 0; offset < 6; offset++) {
		if (snow1[offset] != snow2[(start + offset) % 6]) {
			return 0;
		}
	}
	return 1;
}

int identical_left(int snow1[], int snow2[], int start) {
	int offset, snow2_index;

	for (offset = 0; offset < 6; offset++) {
		snow2_index = start - offset;
		if (snow2_index < 0) {
			snow2_index += 6;
		}
		if (snow1[offset] != snow2[snow2_index]) {
			return 0;
		}
	}
	return 1;
}

int are_identical(int snow1[], int snow2[]) {
	for (int start = 0; start < 6; start++) {
		if (identical_right(snow1,snow2, start)) {
			return 1;
		}
		if (identical_left(snow1, snow2, start)) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int snowflake1[6] = {1, 2, 3, 1, 5, 6};
	int snowflake2[6] = {1, 2, 3, 1, 5, 6};
	printf("%d\n", are_identical(snowflake1,snowflake2));

	int snowflake3[6] = {4, 5, 6, 1, 2, 3};
	printf("%d\n", are_identical(snowflake1,snowflake3));

	int snowflake4[6] = {3, 2, 1, 6, 5, 4};
	printf("%d\n", are_identical(snowflake1,snowflake4));

	int snowflake5[6] = {7, 2, 1, 6, 5, 4};
	printf("%d\n", are_identical(snowflake1,snowflake5));

	return 0;
}
