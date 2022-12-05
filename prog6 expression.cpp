#include <iostream>
#include<math.h>
using namespace std;
int main() {
    float meal,tax,tip,grandtotal;
    meal=100;
    tax=meal*0.18;
    tip=meal*0.5;
    grandtotal=meal+tax+tip;
    cout<<grandtotal;
}
