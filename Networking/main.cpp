#define WIN32_LEAN_AND_MEAN  // Say this...
#include <windows.h>         // And now we can include that.

#include <iostream>
#include <winsock2.h>        // And this.

int main()
{
    WSADATA wsaData;

    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
        {
        fprintf(stderr, "WSAStartup failed.\n");
        exit(1);
    }

    std::cout << "Went well";

    if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2)
    {
        fprintf(stderr, "Version 2.2 of Winsock not available.\n");
        // Call when done with WINSOCK
        WSACleanup();
        exit(2);
    }

}