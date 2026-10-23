#include <iostream>
#include "MyArr.h"
using namespace std;

int main() {
    Pair<string, int> student("Sofiya", 100);
    cout << "Student: ";
    student.show();

    Pair<string, double> product("TV", 999.9);
    cout << "TV: ";
    product.show();

    Pair<int, double> group(21, 99.9);
    cout << "Group: ";
    group.show();

    return 0;
}