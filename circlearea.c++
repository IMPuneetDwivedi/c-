#include<iostream>

using namespace std;

float circle_area(float radius)
{
 float area = M_PI * radius * radius;
 return area;
}
int main(){
 float radius;
 cin>> radius;
 float area = circle_area(radius);
 cout<<" Area of circle is:"<<area<<endl;
 return 0;
}
