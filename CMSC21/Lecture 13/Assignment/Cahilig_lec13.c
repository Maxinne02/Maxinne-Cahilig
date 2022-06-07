#include <stdio.h>
#include <math.h>

//structures
struct line{
    struct point{
        float x, y;
    }
    point1, point2;
    struct midpoint{
        float x, y;
    }
    point3; 
    float slope;
    float distance;
};

//defined functions
float solveSlope(struct line *line1);
float solveMidpoint(struct line *line1);
float solveDistance(struct line *line1);
void getSlopeInterceptForm(struct line *line1);

int main(){
    struct line line1;
    printf("Enter x and y for point1: ");   //user input for the values of x and y for point1
    scanf("%f %f", &line1.point1.x, &line1.point1.y);
    printf("Enter x and y for point2: ");   //user input for the values of x and y for point1
    scanf("%f %f", &line1.point2.x, &line1.point2.y);
    
    
    //passing structure to a function
    solveSlope(&line1);
    printf("Slope: %f\n", line1.slope);

    solveMidpoint(&line1);
    printf("Midpoint: %f %f\n", line1.point3.x, line1.point3.y);

    solveDistance(&line1);
    printf("Distance between 2 points: %f\n", line1.distance);
    
    getSlopeInterceptForm(&line1);
    return 0;
}

//for the slope
float solveSlope(struct line *line1){
    //passing structure to a function by reference.
    return line1->slope = (line1->point2.y - line1->point1.y) / (line1->point2.x - line1->point1.x);
}

//for the midpoint
float solveMidpoint(struct line *line1){
    line1->point3.x = ((line1->point1.x + line1->point2.x) / 2);
    line1->point3.y = ((line1->point1.y + line1->point2.y) / 2);
    return (line1->point3.x, line1->point3.y);
}

//for the distance
float solveDistance(struct line *line1){
    float square_x = (line1->point2.x - line1->point1.x) * (line1->point2.x - line1->point1.x);
    float square_y = (line1->point2.y - line1->point1.y) * (line1->point2.y - line1->point1.y);
    line1->distance = sqrt(square_x + square_y);
    return (line1->distance);
}

//for the slope intercept form
void getSlopeInterceptForm(struct line *line1){
    float b = line1->point2.y-(line1->slope * line1->point2.x);
    printf("y = %fx + (%f)", line1->slope, b);
}