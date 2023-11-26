// MyADT.h
#pragma once

#include <cliext/list>

using namespace System;
using namespace cliext;
using namespace System::Collections::Generic;

ref class MyADT
{
public:
    String^ name;
    int bst;
    int pr;
    bool io;
    List<int>^ inst_req;

    // Default constructor
    MyADT()
    {
        name = "";
        bst = 0;
        pr = 0;
        io = false;
        inst_req = gcnew List<int>();
    }

    // Parameterized constructor
    MyADT(String^ n, int b, int p, bool i, List<int>^ req)
    {
        name = n;
        bst = b;
        pr = p;
        io = i;
        inst_req = req;
    }
};
