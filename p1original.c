#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the value of x1, y1: \n");
  scanf("%f%f",x1,y1);
  printf("Enter the value of x2, y2: \n");
  scanf("%f%f",x2,y2);
}

void find_distance(float x1, float y1, float x2, float y2, float *length)
{
  *length=((x2-x2)*(x2-x1))+((y2-y1)*(y2-y1));
  *length=sqrtf(*length);
}

void output(float x1, float y1,float x2, float y2, float length)
{
  printf("The distance between (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,length);
}

int main()
{
  float a,b,c,d,l;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&l);
  output(a,b,c,d,l);
  return 0;
}