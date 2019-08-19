/*
Anthony Gatte
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include "MagicBag.h"
using namespace std;

int main() {

MagicBag mb1;
mb1.insert(12);
mb1.insert(2);
mb1.insert(3);

cout <<   mb1 <<   endl << endl;

MagicBag mb2(mb1);

cout <<   "The number of ones in   the bag is   " <<   mb1.peek(1) << endl;
cout <<   "The number of twos in   the bag is   " <<   mb1.peek(2) << endl;

return 0;

}
