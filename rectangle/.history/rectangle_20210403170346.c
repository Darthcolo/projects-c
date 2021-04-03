/***********************
* By: Damian Demasi
* Date: 03/04/2021
* Requirements: Create a C program that displays the perimeter and area of a rectangle.
***********************/

#include <stdio.h>

int main()
{
    int width, height;

    scanf("What is the width of the rectangle? %d\n", &width);
    scanf("What is the height of the rectangle? %d\n", &height);

    int perimeter = (width + height) * 2;
    int area = width * height;

    printf("The rectangle has %d in width and %d in height.\n", width, height);
    printf("The perimeter is: %d\n", perimeter);
    printf("The area is: %d\n", area);

    return 0;
}