/**
 * @file stats.c
 * @brief Implementation file for statistical analysis functions
 * Author: Douglas Lima Benevides
 * Date: 01/08/2023
 * Description: This file contains functions to analyze an array of unsigned char data items and report analytics
 *              on the maximum, minimum, mean, and median of the data set. It also includes a function to reorder
 *              the data set from largest to smallest and print the statistics and sorted data to the screen.
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_array(unsigned char *data, unsigned int size) {
    printf("Array Data:");
    for (unsigned int i = 0; i < size; i++) {
        printf(" %d", data[i]);
    }
    printf("\n");
}

void print_statistics(unsigned char *data, unsigned int size) {
    unsigned char maximum = find_maximum(data, size);
    unsigned char minimum = find_minimum(data, size);
    unsigned char mean = find_mean(data, size);
    unsigned char median = find_median(data, size);

    printf("Data Statistics:\n");
    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);
    printf("Mean: %d\n", mean);
    printf("Median: %d\n", median);
}

unsigned char find_median(unsigned char *data, unsigned int size) {
    sort_array(data, size);

    if (size % 2 == 0) {
        return (data[size / 2 - 1] + data[size / 2]) / 2;
    } else {
        return data[size / 2];
    }
}

unsigned char find_mean(unsigned char *data, unsigned int size) {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

unsigned char find_maximum(unsigned char *data, unsigned int size) {
    unsigned char max = data[0];
    for (unsigned int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char *data, unsigned int size) {
    unsigned char min = data[0];
    for (unsigned int i = 1; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

void sort_array(unsigned char *data, unsigned int size) {
    unsigned char temp;
    for (unsigned int i = 0; i < size - 1; i++) {
        for (unsigned int j = 0; j < size - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void main() {
  unsigned char test_data[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                    114, 88,   45,  76, 123,  87,  25,  23,
                                    200, 122, 150, 90,   92,  87, 177, 244,
                                    201,   6,  12,  60,   8,   2,   5,  67,
                                    7,  87, 250, 230,  99,   3, 100,  90};

    unsigned int data_size = sizeof(test_data) / sizeof(test_data[0]);

    print_array(test_data, data_size);
    print_statistics(test_data, data_size);

    return 0;
}
