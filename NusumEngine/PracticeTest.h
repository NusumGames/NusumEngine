#pragma once
#include <iostream>

struct DataTypeTestUtil
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


namespace TEST
{
    enum EventType {
        NONE = 0,
        PUSH = 1 << 0,
        RELEASE = 1 << 1,
        DOUBLECLICK = 1 << 2,
        DRAG = 1 << 3,
        MOVE = 1 << 4,
        KEYDOWN = 1 << 5,
        KEYUP = 1 << 6,
        FRAME = 1 << 7,
        RESIZE = 1 << 8,
        SCROLL = 1 << 9,
        PEN_PRESSURE = 1 << 10,
        PEN_ORIENTATION = 1 << 11,
        PEN_PROXIMITY_ENTER = 1 << 12,
        PEN_PROXIMITY_LEAVE = 1 << 13,
        CLOSE_WINDOW = 1 << 14,
        QUIT_APPLICATION = 1 << 15,
        USER = 1 << 16
    };

    void testShiftOperators()
    {
                                                     
        std::cout << "NONE = 0                       - " << (NONE) << std::endl;
        std::cout << "PUSH = 1 << 0                  - " << (PUSH) << std::endl;
        std::cout << "RELEASE = 1 << 1               - " << (RELEASE) << std::endl;
        std::cout << "DOUBLECLICK = 1 << 2           - " << (DOUBLECLICK) << std::endl;
        std::cout << "DRAG = 1 << 3                  - " << (DRAG) << std::endl;
        std::cout << "MOVE = 1 << 4                  - " << (MOVE) << std::endl;
        std::cout << "KEYDOWN = 1 << 5               - " << (KEYDOWN) << std::endl;
        std::cout << "KEYUP = 1 << 6                 - " << (KEYUP) << std::endl;
        std::cout << "FRAME = 1 << 7                 - " << (FRAME) << std::endl;
        std::cout << "RESIZE = 1 << 8                - " << (RESIZE) << std::endl;
        std::cout << "SCROLL = 1 << 9                - " << (SCROLL) << std::endl;
        std::cout << "PEN_PRESSURE = 1 << 10         - " << (PEN_PRESSURE) << std::endl;
        std::cout << "PEN_ORIENTATION = 1 << 11      - " << (PEN_ORIENTATION) << std::endl;
        std::cout << "PEN_PROXIMITY_ENTER = 1 << 12  - " << (PEN_PROXIMITY_ENTER) << std::endl;
        std::cout << "PEN_PROXIMITY_LEAVE = 1 << 13  - " << (PEN_PROXIMITY_LEAVE) << std::endl;
        std::cout << "CLOSE_WINDOW = 1 << 14         - " << (CLOSE_WINDOW) << std::endl;
        std::cout << "QUIT_APPLICATION = 1 << 15     - " << (QUIT_APPLICATION) << std::endl;
        std::cout << "USER = 1 << 16                 - " << (USER) << std::endl;


        std::cout << "PUSH & RELEASE - " << (PUSH & RELEASE) << std::endl;
        std::cout << "1 OR 2 - " << (1 | 2) << std::endl;


    }

    void convertCharToASCII()
    {
        int asciiForSmalla = 'a';
        std::cout << "used int to convert char a to ASCII : " << asciiForSmalla << std::endl; // output=97
        int asciiForCapA = 'A';
        std::cout << "used int to convert char A to ASCII : " << asciiForCapA << std::endl; //output=65

        unsigned int charA2 = 'A';
        std::cout << "used unsigned int to convert char A to ASCII : " << charA2 << std::endl;

        signed int charA3 = 'A';
        std::cout << "used signed int to convert char A to ASCII : " << charA3 << std::endl;

        uint16 charA4 = 'A';
        std::cout << "used uint16 to convert char A to ASCII : " << charA4 << std::endl;

        int16 charA5 = 'A';
        std::cout << "used uint16 to convert char A to ASCII : " << charA5 << std::endl;

        uint32 charA6 = 'A';
        std::cout << "used uint16 to convert char A to ASCII : " << charA6 << std::endl;

        int32 charA7 = 'A';
        std::cout << "used uint16 to convert char A to ASCII : " << charA7 << std::endl;
    }

    void bitwiseORTest(int inValue)
    {
        int a = 2;
        int b = 5;
        if (inValue | a || inValue | b)
        {
            std::cout << "true" << std::endl;
        }
        else
        {
            std::cout << "false" << std::endl;
        }
    }

    void bitwiseORAssignementTest()
    {
        int n = 0;
        int CONTOL = 1 << 0;
        int ALT = 1 << 1;
        int SHIFT = 1 << 2;
        std::cout << "Before n : " << n << std::endl;
        std::cout << "Before CONTOL : " << CONTOL << std::endl;
        std::cout << "Before ALT : " << ALT << std::endl;
        std::cout << "Before SHIFT : " << SHIFT << std::endl;

        n |= CONTOL;
        std::cout << "After n with CONTOL : " << n << std::endl;
        n |= ALT;
        std::cout << "After n with ALT : " << n << std::endl;
        n |= SHIFT;
        std::cout << "After n with SHIFT : " << n << std::endl;

        //0000
        //0001
        //---------
        //0001 = 1

        //0001
        //0010
        //---------
        //0011 = 3
        //
        //0011
        //0100
        //-------
        //0111 = 7
    }

    void mouseEventExample()
    {
        INPUT input;
        ZeroMemory(&input, sizeof(input));
        input.type = INPUT_KEYBOARD;
        input.ki.wVk = 'D';
    }

    void getCurrentDisplayResolutionIncludingTaskbarArea()
    {
        int resolutionX = ::GetSystemMetrics(SM_CXSCREEN);
        int resolutionY = ::GetSystemMetrics(SM_CYSCREEN);
        std::cout << "ResolutionX : " << resolutionX << " ResolutionY : " << resolutionY << std::endl;
    }

    void getWorkAreaExcludingTaskBar()
    {
        // this will get display resolution by excluding taskbar area.
        RECT WorkAreaRect;
        if (!SystemParametersInfo(SPI_GETWORKAREA, 0, &WorkAreaRect, 0))
        {
            WorkAreaRect.top = WorkAreaRect.bottom = WorkAreaRect.left = WorkAreaRect.right = 0;
        }
        std::cout << "WorkAreaRect.left : " << WorkAreaRect.left << " WorkAreaRect.top : " << WorkAreaRect.top << std::endl;
        std::cout << "WorkAreaRect.right : " << WorkAreaRect.right << " WorkAreaRect.bottom: " << WorkAreaRect.bottom << std::endl;
    }

    void getMonitorInfo()
    {
        // this will get display resolution by excluding taskbar area.
        RECT rect;
        HMONITOR hMonitor = MonitorFromRect(&rect, MONITOR_DEFAULTTONEAREST);
        MONITORINFOEX monitorInfo;
        monitorInfo.cbSize = sizeof(MONITORINFO);
        if (!::GetMonitorInfo(hMonitor, &monitorInfo)) {
            std::cout << "Failed to fetch monitor infor" << std::endl;
        }
        std::cout << "monitorInfo.rcWork.left : " << monitorInfo.rcWork.left << " monitorInfo.rcWork.top : " << monitorInfo.rcWork.top << std::endl;
        std::cout << "monitorInfo.rcWork.right : " << monitorInfo.rcWork.right << " monitorInfo.rcWork.bottom : " << monitorInfo.rcWork.bottom << std::endl;
    }



}


