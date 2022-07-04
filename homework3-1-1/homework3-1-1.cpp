//
//  main.cpp
//  Test
//
//  Created by Akhmetov Ersyn on 02.07.2022.
//

#include <iostream>
#include <fstream>

int main(int argc, const char* argv[]) {

    std::ifstream fin("in.txt");
    if (!fin.is_open())
    {
        std::cout << "Can't open input file!";
        return 0;
    }
    unsigned int size1 = 0, size2 = 0;
    fin >> size1;
    int* arr1 = new int[size1]();
    for (int i = 0; i < size1; i++)
    {
        fin >> arr1[i];
    }
    fin >> size2;
    int* arr2 = new int[size2]();
    for (int i = 0; i < size2; i++)
    {
        fin >> arr2[i];
    }
    fin.close();

    std::ofstream fout("out.txt");
    if (!fout.is_open())
    {
        std::cout << "Can't open output file!";
        return 0;
    }
    fout << size2 << std::endl;
    for (int i = size2 - 1; i >= 0; i--)
    {
        fout << arr2[i] << " ";
    }
    fout << std::endl;
    fout << size1 << std::endl;
    for (int i = size1 - 1; i >= 0; i--)
    {
        fout << arr1[i] << " ";
    }
    fout << std::endl;
    fout.close();

    delete[] arr1;
    delete[] arr2;

    std::cout << "All good!" << std::endl;
    return 0;
}
