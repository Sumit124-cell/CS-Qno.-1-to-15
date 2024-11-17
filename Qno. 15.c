//write a program which takes the radius of a circle as input from the user, passes it to another function that computes the area and circumference of the circle and display the value of area and circumference from the main function. 


 #include<stdio.h>
int area(int r){
    int area;
    area=3.14*r*r;
    return area;
}
int circum(int r){
return (2*3.14*r);
}
int main(){
    int r,a,c;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    a=area(r);
    c=circum(r);
    printf("Area of circle is %d\n",a);
    printf("Circumference of circle is %d",c);
}