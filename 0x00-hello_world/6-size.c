#include<stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * Return: always  0(Success)
 */

int main(void) {
    printf("The size of char is %zu bytes\n", sizeof(char));
    printf("The size of short is %zu bytes\n", sizeof(short));
    printf("The size of int is %zu bytes\n", sizeof(int));
    printf("The size of long is %zu bytes\n", sizeof(long));
    printf("The size of long long is %zu bytes\n", sizeof(long long));
    printf("The size of float is %zu bytes\n", sizeof(float));
    return 0;
}
