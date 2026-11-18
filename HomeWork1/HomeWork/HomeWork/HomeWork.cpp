#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    int N = 0;
    Console::Write(L"Enter your number: ");

    String^ input = Console::ReadLine();

    if (!Int32::TryParse(input, N))
    {
        Console::WriteLine(L"Error: Please enter a valid integer number!");
        return 1;
    }

    if (N <= 0)
{
    Console::WriteLine(L"Error: the variant number can't be greater than 0!");
    return 0;
}

    double LengthRoom = N + 10;
    double WidthRoom = N + 5;

    double carpetPriceSqMt = N;
    double S = LengthRoom * WidthRoom;

    double totalPrice = S * carpetPriceSqMt;

    Console::WriteLine(L"The room size is {0:f2} by {1:f2} meters", LengthRoom, WidthRoom);
    Console::WriteLine(L"The area of the room is {0:F2} square meters", S);
    Console::WriteLine(L"Carpet price ${0:f2}", totalPrice);

    return 0;
}
