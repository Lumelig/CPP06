#include "ScalarConverter.hpp"


#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cstdlib> // strtol, strtod
#include <climits> // INT_MAX, INT_MIN
#include <cctype>  // isdigit, isprint
#include <cmath>   // floor

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &) {}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &) { return *this; }
ScalarConverter::~ScalarConverter() {}

//check if string is just 1 char and not a digit
static bool isCharLiteral(const std::string &str)
{
    return(str.length() == 1 && !std::isdigit(static_cast<unsigned char>(s[0])));
}

static bool isIntLiteral(const std::string &str)
{
    if(str.empty())
        return(false);
    size_t i = 0;
    if(str[i] == '+' || str[i] == '-')
        i++;
    if(i == str.length())
        return(false);
    
}