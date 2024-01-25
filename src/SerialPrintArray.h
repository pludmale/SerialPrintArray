/*
  SerialPrintArray.h - Library for printing C++ arrays using Serial.
  Created by Katrina Kizenbaha, 24th January, 2024.
*/

#ifndef SerialPrintArray_h
#define SerialPrintArray_h

#include "Arduino.h"

class SerialPrintArray
{
  public:
    template <typename T>
    void serialPrintArray(const T* array, size_t length, const char* delimiter = ", ", const char* label = "");
};

template <typename T>
void SerialPrintArray::serialPrintArray(const T* array, size_t length, const char* delimiter, const char* label) {
    if (length == 0) {
        return;
    }

    Serial.print(label);
    Serial.print(array[0]);

    for (size_t i = 1; i < length; ++i) {
        Serial.print(delimiter);
        Serial.print(array[i]);
    }

    Serial.println();
}

#endif