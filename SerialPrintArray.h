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
    SerialPrintArray();
    
    template <typename T>
    void serialPrintArray(const T* array, size_t length, const char* delimiter = ", ", const char* label = "");
};

#endif