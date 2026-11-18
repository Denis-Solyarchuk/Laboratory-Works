#include <Windows.h>

using namespace System;

// Ôóíêö³ÿ äëÿ êðàñèâîãî âèâåäåííÿ ìàñèâó â êîíñîëü
void PrintArray(String^ name, array<int>^ arr)
{
    Console::Write("{0}: [ ", name);
    for (int i = 0; i < arr->Length; i++)
    {
        Console::Write("{0,4} ", arr[i]);
    }
    Console::WriteLine("]");
}

// Функція для поелементного обміну значеннями двох масивів
void SwapArrays(array<int>^ A, array<int>^ B)
{
    if (A == nullptr || B == nullptr || A->Length != B->Length)
    {
        Console::WriteLine(L"Error: Arrays must have the same size!");
        return;
    }

    for (int i = 0; i < A->Length; i++)
    {
        int temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
}

int main(array<System::String^>^ args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Çàäàºìî ðîçì³ðí³ñòü ìàñèâ³â
    const int n = 6;

    // Ñòâîðåííÿ òà ³í³ö³àë³çàö³ÿ âèõ³äíèõ êåðîâàíèõ ìàñèâ³â A òà B
    array<int>^ A = gcnew array<int>(n) { 10, 20, 30, 40, 50, 60 };
    array<int>^ B = gcnew array<int>(n) { 99, 88, 77, 66, 55, 44 };

    Console::WriteLine(L"=== Âèõ³äí³ ìàñèâè äî îáì³íó ===");
    PrintArray("Ìàñèâ A", A);
    PrintArray("Ìàñèâ B", B);
    Console::WriteLine();

    // Поелементний обмін значеннями масивів
    SwapArrays(A, B);

    Console::WriteLine(L"=== Ìàñèâè ï³ñëÿ îáì³íó çíà÷åííÿìè ===");
    PrintArray("Ìàñèâ A", A);
    PrintArray("Ìàñèâ B", B);

    Console::WriteLine(L"\nÍàòèñí³òü Enter äëÿ çàâåðøåííÿ...");
    Console::ReadLine();

    return 0;
}
