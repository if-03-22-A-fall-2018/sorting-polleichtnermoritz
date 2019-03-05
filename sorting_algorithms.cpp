/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdlib.h>

void 	init_random (int *array, unsigned long length)
{
  for (int i = 0; i < length; i++)
  {
    int r = rand()%20;
    array[i] = r;
  }
}

void 	bubble_sort (int *array, unsigned long length)
{
  int temp;

  for (unsigned long int c = 0 ; c < length - 1; c++)
  {
    for (unsigned long int d = 0 ; d < length - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        temp = array[d];
        array[d] = array[d+1];
        array[d+1] = temp;
      }
    }
  }
}

void 	insertion_sort (int *array, unsigned long length)
{
  int d, temp;
  for (int c = 1 ; c <= length - 1; c++)
  {
    d = c;

    while ( d > 0 && array[d-1] > array[d])
    {
      temp = array[d];
      array[d] = array[d-1];
      array[d-1] = temp;

      d--;
    }
  }
}
