# csci-241-ch03-2
Little_Endian_and_Big_Endian 

Write a C++ program to understand the concept of Little Endian and Big Endian. You can fill the blanks in the following and run it to verify expected results, where we simply create the memory 0x12345678 by a char array:
// TwoEndians.cpp:
// - Understand Little Endian and Big Endian with memory 0x12, 0x34, 0x56, 0x78
#include "stdio.h"

int main()
{
      unsigned char a[4] = { 0x12, 0x34, 0x56, 0x78 };
      unsigned char * p;
      unsigned int n, m;

      printf("Original memory is a[4] = { 0x12, 0x34, 0x56, 0x78 }\n\n");

      // 1. Which type of Endian for Directly Cast?
      //  - Cast the memory pointed by the array name a, to an unsigned int address
      //  - Then dereference to get value in n. 
      // fill the blank below:
      printf("1. Directly Cast: n is %Xh\n",                );

      // 2. Make Little Endian as expected, n is 0x78563412
      p = a;
      n = 0;
      for (int i=0; i<4; i++)
      {
         // Use bitwise logic and shift operators to generate n
         // ...
      }
      printf("2. Little Endian: n is %Xh\n", n);

      // 3. Make Big Endian as expected, n is 0x12345678
      p = a;
      n = 0;
      for (int i=0; i<4; i++)
      {
         // Use bitwise logic and shift operators to generate n
         // ...
      }
      printf("3. Big Endian:    n is %Xh\n", n);

      return 0;
}
To simplify the conversion between decimal and hexadecimal, we make use of printf() this time. As indicated above, please check three outputs:
1. Which type of Endian for directly cast in your current system?
2. Make the Little Endian as expected to output n 78563412h
3. Make the Big Endian as expected to output n 12345678h
This assignment requires two concepts of your C/C++ background knowledge, one is Bitwise Operators, especially the left shift operator '<<' and other two operators '*' and '&'. You can search online to find more.
