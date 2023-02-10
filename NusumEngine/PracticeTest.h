#pragma once
#include <iostream>

class DataTypeTestUtil
{
    void dataTypesInformation()
    {
        std::cout << "----------------------------------------------------" << std::endl;
        std::cout << "Data types comparision" << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
        std::cout << "std::is_same<int, int>::value = " << std::is_same<int, int>::value << std::endl;
        std::cout << "std::is_same<int, signed int>::value = " << std::is_same<int, signed int>::value << std::endl;
        std::cout << "std::is_same<int, unsigned int>::value = " << std::is_same<int, unsigned int>::value << std::endl;
        std::cout << "std::is_same<signed int, int>::value = " << std::is_same<signed int, int>::value << std::endl;
        std::cout << "std::is_same<signed int, signed int>::value = " << std::is_same<signed int, signed int>::value << std::endl;
        std::cout << "std::is_same<signed int, unsigned int>::value = " << std::is_same<signed int, unsigned int>::value << std::endl;
        std::cout << "std::is_same<unsigned int, int>::value = " << std::is_same<unsigned int, int>::value << std::endl;
        std::cout << "std::is_same<unsigned int, signed int>::value = " << std::is_same<unsigned int, signed int>::value << std::endl;
        std::cout << "std::is_same<unsigned int, unsigned int>::value = " << std::is_same<unsigned int, unsigned int>::value << std::endl;
        std::cout << "----" << std::endl;
        std::cout << "std::is_same<char, char>::value = " << std::is_same<char, char>::value << std::endl;
        std::cout << "std::is_same<char, signed char>::value = " << std::is_same<char, signed char>::value << std::endl;
        std::cout << "std::is_same<char, unsigned char>::value = " << std::is_same<char, unsigned char>::value << std::endl;
        std::cout << "std::is_same<signed char, char>::value = " << std::is_same<signed char, char>::value << std::endl;
        std::cout << "std::is_same<signed char, signed char>::value = " << std::is_same<signed char, signed char>::value << std::endl;
        std::cout << "std::is_same<signed char, unsigned char>::value = " << std::is_same<signed char, unsigned char>::value << std::endl;
        std::cout << "std::is_same<unsigned char, char>::value = " << std::is_same<unsigned char, char>::value << std::endl;
        std::cout << "std::is_same<unsigned char, signed char>::value = " << std::is_same<unsigned char, signed char>::value << std::endl;
        std::cout << "std::is_same<unsigned char, unsigned char>::value = " << std::is_same<unsigned char, unsigned char>::value << std::endl;

        std::cout << "----------------------------------------------------" << std::endl;
        std::cout << "Data types information" << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;




    }

};

