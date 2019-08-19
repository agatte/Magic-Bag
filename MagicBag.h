/*
Anthony Gatte
*/

#include <iostream>
using namespace std;

class MagicBag {

private:
  int size;
  int *buffer;

public:
  MagicBag() {
    size = 50;
    buffer = NULL;

  }
/*
Deletes the MagicBag array
*/
  ~MagicBag() {
    if (buffer)
      delete (buffer);
  }

/*
Allows the user to input items into the MagicBag
*/
  void insert(int item) {
    for (int i = SIZE - 1; i > index; i--)

  }

/*
Allows the user to "peek" into the bag which shows the amount of corresponding items. Returns 0 otherwise
*/
  int peek(int item) {
    return 0;
  }

  MagicBag(const MagicBag& other) {

  }

/*
Allows the user to remove objects from the MagicBag. This object will be chosen at random
*/
  int draw() {
    return 0;
  }


  MagicBag& operator=( const MagicBag& other) {
    if(size <= index || index < 0){
      throw(1); //throw an error
    }
    return buffer[index];
  }

  friend ostream& operator<<(ostream& os, const MagicBag& me) {
    os << "[";
    for (int i = 0; i < me.size -1; i ++) {
      //os << me.buffer[i] << ", ";
    }
    //os << me.buffer [me.size - 1] << "]";
    return os;

    //os << mb.ary[0];
  }

}
