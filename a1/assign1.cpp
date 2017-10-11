#include <iostream>
#include "assign1.h"
#include <cmath>

using namespace std;

int main(){

	//int A = 

spatial pathLength(Point path[], int numPoints){

	spatial distance = 0;
	for(int i = 1; i <= numPoints; i++){
		distance += hypot((path[i.x]-path[(i-1).x),(path[i.y]-path[(i-1).y))
	}
	return distance;
}
