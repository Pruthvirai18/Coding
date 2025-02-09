// A person’s body mass index is a simple calculation based on height and weight that classifies the person as underweight, overweight, or normal. The formula for metric unit is,

// BMI = weight in kilograms / (height in meters)2

// You are given a function,

// Int GetBMICategory(int weight, float height);

// The function accepts the weight (an integer number) and height (a floating point number) of a person as its arguments. Implement the function such that it calculations the BMI of the person and returns an integer, the person’s BMI category as per the given rules:

// If BMI < 18, return 0.
// If 18 >= BMI < 25, return 1.
// If 25 >= BMI <30, return 2.
// If 30 >= BMI < 40, return 3.
// If BMI >= 40, return 4.
// Note:

// Weight > 0 and its unit is kilogram.
// Height > 0 and its unit is metre.
// Compute BMI as a floating-point.


#include<stdio.h>
int GetBMICategory(int weight, float height)
{
    float BMI=weight/(height*height);
    if(BMI<18)
    return 0;
    else if(BMI<=18)
    return 1;
    else if(BMI>=25 && BMI>30) 
    return 2;
    else if(BMI>=30 && BMI<40)
    return 3;
    else if(BMI>=40)
    return 4;   
}
int main()
{
    int w;
    float h;
    printf("Enter weight and height");
    scanf("%d%d",&w,&h);
    printf("%d",GetBMICategory(w,h));
    return 0;
}