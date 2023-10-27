#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * from one number to others
 * @n: start num
 * @m: end num
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int m, unsigned long int n)
{
        int k, rounder = 0;
        unsigned long int previous;
        unsigned long int ex = m ^ n;

        for (k = 63; k >= 0; k--)
        {
                previous = ex >> k;
                if (previous & 1)
                        rounder++;
        }
        return (rounder);
}
