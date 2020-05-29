/*-----------------------------------------------------------------------------------------
Student: Gabriel Warkentin
Class: CSCI 241
Instructor: Ding
Assignment: Ch03, Little_Endian_and_Big_Endian
Due Date: 2/12/2020

Description:
Understand Little Endian and Big Endian with memory 0x12, 0x34, 0x56, 0x78
*/

#include "stdio.h"

int main()
{
    unsigned char a[4] = { 0x12, 0x34, 0x56, 0x78 };
    unsigned char* p;
    unsigned int n, m;

    printf("Original memory is a[4] = { 0x12, 0x34, 0x56, 0x78 }\n\n");

    // 1. Which type of Endian for Directly Cast?
    // casts a's address to unsigned int pointer which is dereferenced.

    n = *(unsigned int*)&a;
   
    printf("1. Directly Cast: n is %Xh\n", n);


    // 2. Make Little Endian as expected, n is 0x78563412
    p = a;
    n = 0;
    for (int i = 0; i < 4; i++)
    {
        n = n | (*(p + i) << ( i * 8));
    }
    printf("2. Little Endian: n is %Xh\n", n);


    // 3. Make Big Endian as expected, n is 0x12345678
    p = a;
    n = 0;
    for (int i = 0; i < 4; i++)
    {
        n = n | (*(p + (3 - i)) << (i * 8));
    }
    printf("3. Big Endian:    n is %Xh\n", n);

    return 0;
}