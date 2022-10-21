#include <iostream>

using namespace std;

// Estructura para poder generar las cordenadas
struct Point {
    int x,y;
};

int orentation(Point p , Point q , Point k){
    int val = (q.y - p.y) * (k.x - q.x) - (q.x - p.x) *(k.y - q.x);
    if (val ==0) return 0; // if si collinear
    return (val > 0 )? 1:2; // clock or counterclockwise
}

bool segments_intersect(Point p1, Point q1,Point p2, Point q2){
//  we check for the orentation of the lines in the plane
int d1 = orentation(p1,q1,p2);
int d2= orentation(p1,q1,q2);
int d3 = orentation(p2,q2,p1);
int d4 = orentation(p2,q2,q1);
// General case
if(d1 != d2 && d3 !=d4){
    return true;
}

}
int main(){
    // p1 y q1 representan un tramo
    struct Point p1 = {1,1},q1 ={10,1};
    struct Point p2 = {1,2},q2 = {10,2};

    segments_intersect(p1,q1,p2,q2) ? cout<< "yes\n": cout<<"no\n";

}