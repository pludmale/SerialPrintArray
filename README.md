# SerialPrintArray
A C++ Arduino library for printing arrays using Serial.
Prints the array elements on a separate line, delimited by ", " by default, with no label.
Optional parameters include a custom delimiter and a label that will be prepended to the list of elements.

Usage:
```c++
#include <SerialPrintArray.h>

SerialPrintArray serialPrintArray;

void setup() {
  int intArray[] = {1, 2, 3, 4, 5};
  size_t intArrayLength = sizeof(intArray) / sizeof(int);
  serialPrintArray.serialPrintArray(intArray, intArrayLength);
  serialPrintArray.serialPrintArray(intArray, intArrayLength, " | ");
  serialPrintArray.serialPrintArray(intArray, intArrayLength, " | ", "Array of integers with custom delimiter: ");

  double doubleArray[] = {1.1, 1.2, 3.14, 66.6, 4.20};
  size_t doubleArrayLength = sizeof(doubleArray) / sizeof(double);
  serialPrintArray.serialPrintArray(doubleArray, doubleArrayLength);

  char* charArray[] = {"One", "Two", "Three", "Four"};
  size_t charArrayLength = sizeof(charArray) / sizeof(char*);
  serialPrintArray.serialPrintArray(charArray, charArrayLength);
}

void loop() {}
```
