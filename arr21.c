// Array21. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее арифметическое элементов массива с номерами от K до L включительно.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, K, L;
    srand(time(NULL));
    printf("Введите размер массива (N): ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Размер массива должен быть положительным.\n");
        return 1;
    }
    int array[N];
    printf("Массив:\n");
    for (int i = 0; i < N; i++) {
        array[i] = rand() % 100 + 1;
        printf("array[%d] = %d\n", i + 1, array[i]);
    }
    printf("\nВведите значения K и L (1 ≤ K ≤ L ≤ %d): ", N);
    scanf("%d %d", &K, &L);
    if (K < 1 || L > N || K > L) {
        printf("Неверные значения K и L.\n");
        return 1;
    }
    int sum = 0;
    int count = 0;
    printf("\nЭлементы от K до L:\n");
    for (int i = K - 1; i <= L - 1; i++) {
        printf("%d ", array[i]);
        sum += array[i];
        count++;
    }
    double average = (double)sum / count;
    printf("\nСреднее арифметическое элементов с %d по %d: %.2f\n", K, L, average);
    return 0;
}
