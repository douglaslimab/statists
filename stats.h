/**
 * @file stats.h
 * @brief Header file for statistical analysis functions
 * Author: Douglas Lima Benevides
 * Date: 01/08/2023
 * Description: This file contains function declarations for analyzing an array of unsigned char data items
 *              and reporting analytics on the maximum, minimum, mean, and median of the data set. It also includes
 *              a function to reorder the data set from largest to smallest.
 */

#ifndef STATS_H
#define STATS_H

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param data Pointer to an n-element data array
 * @param size Size of the array
 */
void print_array(unsigned char *data, unsigned int size);

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param data Pointer to an n-element data array
 * @param size Size of the array
 */
void print_statistics(unsigned char *data, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param data Pointer to an n-element data array
 * @param size Size of the array
 * @return The median value
 */
unsigned char find_median(unsigned char *data, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param data Pointer to an n-element data array
 * @param size Size of the array
 * @return The mean value
 */
unsigned char find_mean(unsigned char *data, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param data Pointer to an n-element data array
 * @param size Size of the array
 * @return The maximum value
 */
unsigned char find_maximum(unsigned char *data, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * @param data Pointer to an n-element data array
 * @param size Size of the array
 * @return The minimum value
 */
unsigned char find_minimum(unsigned char *data, unsigned int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 *        (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.)
 *
 * @param data Pointer to an n-element data array
 * @param size Size of the array
 */
void sort_array(unsigned char *data, unsigned int size);

#endif /* STATS_H */
