#include <iostream>
#include <cmath>
using namespace std;

void calculateDistance(double x1, double x2, double y1, double y2);

int main()
{
  double x1;
  double x2;
  double y1;
  double y2;

    cout << "calculate the euclidean distance between two points" << endl;
    cout << " " << endl;

    cout << "Enter the value of x1: ";
    cin >> x1;

    cout << "Enter the value of x2: ";
    cin >> x2;

    cout << "Enter the value of y1: ";
    cin >> y1;

    cout << "Enter the value of y2: ";
    cin >> y2;

 calculateDistance( x1, x2, y1, y2);

    return 0;
}

 void calculateDistance(double x1, double x2, double y1, double y2){

cout << "The distance between point 1 and point 2 is " << sqrt((x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1));

}
