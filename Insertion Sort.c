#include <stdio.h>

void insertionSort(int a[], int n) {
    //write your code here...
	int i,j,max_idx,temp;
	for(i = 0; i < n - 1; i++){
		max_idx = i;
		for(j = i+1; j < n; j++){
			if(a[j] < a[max_idx]){
				max_idx = j;
			}
		}
		temp = a[max_idx];
		a[max_idx] = a[i];
		a[i] = temp;
	}
    
    
    
    
}

int main() {
    int a[20], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insertionSort(a, n);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
