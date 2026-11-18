#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    // 2
    Console::Write(L"Enter the first word: ");
    String^ str1 = (Console::ReadLine());

    Console::Write(L"Enter the second word: ");
    String^ str2 = (Console::ReadLine());

    Console::Write(L"\n");

    String^ result = str1 + " " + str2;

    Console::WriteLine(L"Merged rows: {0}", result);

    Console::Write(L"\n");

    // 3

    int cmp = String::Compare(str1, str2, StringComparison::Ordinal);

    if (cmp == 0)
    {
        Console::WriteLine(L"The strings are identical");
    }
    else if (cmp < 0)
    {
        Console::WriteLine(L"The first string comes before the second");
    }
    else
    {
        Console::WriteLine(L"The first string comes after the second");
    }

    Console::Write(L"\n");

    //4

    String^ modified = L"begin" + str1 + L"end";

    int len = modified->Length;
    Console::WriteLine(L"Result: {0}", modified);
    Console::WriteLine(L"Length: {0}", len);

    Console::Write(L"\n");

    //5

    String^ reversed = L"";

    for (int i = str1->Length - 1; i >= 0; i--)
    {
        reversed += str1[i];
    }

    Console::WriteLine(L"Output: {0}", str1);
    Console::WriteLine(L"Reverse: {0}", reversed);

    Console::Write(L"\n");

    //6

    Console::Write(L"Enter the first word: ");
    str1 = (Console::ReadLine());

    Console::Write(L"Enter the second word: ");
    str2 = (Console::ReadLine());

    Console::Write(L"\n");

    // We determine the sizes of the first and second words
    int len1 = 0;
    for each (wchar_t ch in str1)
    {
        len1++;
    }
    int len2 = 0;
    for each (wchar_t ch in str2)
    {
        len2++;
    }

    if (len1 > len2)
    {
        Console::WriteLine(L"The first line is longer ({0} against {1} characters)", len1, len2);
    }
    else if (len2 > len1)
    {
        Console::WriteLine(L"The second line is longer ({0} against {1} characters)", len2, len1);
    }
    else
    {
        Console::WriteLine(L"These lines have the same length ({0} characters)", len1);
    }

    return 0;
}
