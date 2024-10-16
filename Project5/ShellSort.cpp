template <typename T>
void ShellSort(T a[], int n) {
	int i, j;
	T b;
	int h = n / 2;
	while (h != 0) {
		for (i = 0; i < n - h; i++) {
			if (a[i + h] < a[i]) {
				b = a[i + h];
				a[i + h] = a[i];
				a[i] = b;
			}
		}
		h = h-1;
	}
}