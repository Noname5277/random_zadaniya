#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    srand(time(NULL));
    printf("Введите размер массива: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Размер должен быть больше 0.\n");
        return 1;
    }
    int *array = (int *)malloc(N * sizeof(int));
    if (array == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }
    printf("\nИсходный массив:\n");
    for (int i = 0; i < N; i++) {
        array[i] = rand() % 100 + 1;
        printf("array[%d] = %d\n", i, array[i]);
    }
    int *new_array = (int *)malloc((N + 1) * sizeof(int));
    if (new_array == NULL) {
        printf("Ошибка выделения памяти для нового массива.\n");
        free(array);
        return 1;
    }
    for (int i = 0; i < N; i++) {
        new_array[i] = array[i];
    }
    printf("\nВведите новый элемент для добавления в конец массива: ");
    scanf("%d", &new_array[N]);
    printf("\nНовый массив (на 1 элемент больше):\n");
    for (int i = 0; i < N + 1; i++) {
        printf("new_array[%d] = %d\n", i, new_array[i]);
    }
    free(array);
    free(new_array);
    return 0;
}
