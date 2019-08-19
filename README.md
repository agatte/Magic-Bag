# Magic-Bag

Objects can be inserted into the magic bag using the insert(item) member function. The magic bag can hold any number of items, within the bounds of the available
RAM. Duplicate items are allowed.
Objects are removed from the magic bag using the draw() member function. This function returns a random item and removes it from the bag. The returned item should be randomized. In other words, if there are 5 items in the bag, and only one of them is a 7, then there should be a 1 in 5 chance of drawing a 7 with the draw() function. If the bag is empty, the draw() function should throw an exception.
You can check if an object is in the bag using peek(item), which should return 0 if there is no item in the bag matching the item parameter. If there are items matching
the item parameter in the bag, the number (count) of matching items should be returned.
You can print a magic bag using the operator << function. This function should add the contents of the bag to the ostream in the form “[item1, item2, item3, ... itemN]” with no endl included. The header will be:
o friend ostream& operator<<(ostream& os, const MagicBag& me)
You should be able to assign the contents of a MagicBag using the = operator. This
should result in a copy of the magic bag that is not linked to the original bag. In other words, if a and b are magic bags, the line "a = b;" should result in bags a and b having the same contents. If I then draw elements from bag b, this should not change the contents of bag a.
You should begin by constructing a magic bag that holds integers. For additional credit, you can create a template so that the magic bag can hold any primitive data type (see below for grading details).
You can implement the magic bag using an array, a linked list, or any other data structure that you feel is appropriate. You need to design and implement the underlying data structure yourself. You may not, for example, use C++ standard template library vectors for the underlying data structure. (An array should be the most advanced built in data structure you use.)
