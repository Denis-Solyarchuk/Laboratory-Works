#include <Windows.h>

using namespace System;

// Функція для красивого виведення масиву в консоль
void PrintArray(String^ name, array<int>^ arr)
{
    Console::Write("{0}: [ ", name);
    for (int i = 0; i < arr->Length; i++)
    {
        Console::Write("{0,4} ", arr[i]);
    }
    Console::WriteLine("]");
}

int main(array<System::String^>^ args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Задаємо розмірність масивів
    const int n = 6;

    // Створення та ініціалізація вихідних керованих масивів A та B
    array<int>^ A = gcnew array<int>(n) { 10, 20, 30, 40, 50, 60 };
    array<int>^ B = gcnew array<int>(n) { 99, 88, 77, 66, 55, 44 };

    Console::WriteLine(L"=== Вихідні масиви до обміну ===");
    PrintArray("Масив A", A);
    PrintArray("Масив B", B);
    Console::WriteLine();

    // Поелементний обмін значеннями
    for (int i = 0; i < n; i++)
    {
        int temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }

    Console::WriteLine(L"=== Масиви після обміну значеннями ===");
    PrintArray("Масив A", A);
    PrintArray("Масив B", B);

    Console::WriteLine(L"\nНатисніть Enter для завершення...");
    Console::ReadLine();

    return 0;
}