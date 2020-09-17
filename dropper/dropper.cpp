#include <windows.h>
#include <urlmon.h>
#include <stdio.h>
#include <iostream>

#pragma comment(lib, "urlmon.lib")

#define MAX_LINE 512

int main()
{
    char url[MAX_LINE] = "";
    char destination[MAX_LINE] = "";

    HRESULT dl;

    dl = URLDownloadToFileA(NULL, url, destination, 0, NULL);
}