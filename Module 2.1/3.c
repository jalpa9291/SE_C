#include <stdio.h>
#include <math.h>

int main()
{
	// Area of Circle
	float radius,area;
	printf("\n**Area of Circle**\n");
	printf("Enter the radius of a circle:");
	scanf("%f",&radius);
	area = 3.14159*radius*radius;
	printf("Area of the Circle = %.2f\n", area); 
  
	// Area of Rectangle 
	float height, width, Area;
	printf("\n\n**Area of Rectangle**\n");
	printf("Enter the height of a rectangle: ");
	scanf("%f",&height);
	printf("Enter the width of a rectangle: ");
	scanf("%f",&width);
	
	Area=width*height;
	printf("Area of the Rectangle = %.2f\n",Area);
	
	// Area of Triangle
	float base, Height, AREA;
    printf("\n\n**Area of Triangle**\n");
	printf("Enter the base of the triangle: ");
    scanf("%f",&base);
    printf("Enter the height of the triangle: ");
    scanf("%f",&Height);
    AREA = (base * Height) / 2;
    printf("Area of the Triangle is = %.2f\n", AREA);
    
	return 0;
}



