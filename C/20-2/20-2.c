#include <stdio.h>

int main(void) {
	int size;
	
	printf("숫자를 입력하시오: ");
	scanf("%d", &size);
	
	int arr[size][size];
	int row, col;
	int limit = size;
	int num = 1;
	
	for (row = 0; row < size; row++)
		for(col = 0; col < size; col++)
			arr[row][col] = 0;
					
	row = 0;
	col = 0;
	
	while (num < size * size + 1) {
        while (col != limit) {
            if (arr[row][col] != 0) {
                break;
            } else {
                arr[row][col] = num++;
            }

            (limit == size) ? col++ : col--;
        }

        (limit == size) ? row ++ : row--;
        (limit == size) ? col-- : col++;

        while (row != limit) {
            if (arr[row][col] != 0) {
                break;
            } else {
                arr[row][col] = num++;
            }

            (limit == size) ? row++ : row--;
        }

        (limit == size) ? row-- : row++;
        (limit == size) ? col-- : col++;
		
        limit = (limit == size) ? -1 : size;
	}
	
	for (row = 0; row < size; row++) {
		for (col = 0; col < size; col++)
			printf("%2d ", arr[row][col]);
		
		printf("\n");
	}
	
	return 0;
}