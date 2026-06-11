#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer
{
    public:
        static uintptr_t serializer(Data *ptr);
};

#endif