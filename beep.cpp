/*************************************************************************
	> File Name: beep.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 23 Jun 2017 03:17:24 PM PDT
 ************************************************************************/
#include <unistd.h>
#include <cstdlib>
#include <iostream>

int main()
{
    while(1)
    {
        sleep(1);
        system("canberra-gtk-play -f beep.wav");
        std::cout << "\a";
    }
    return 0;
}
