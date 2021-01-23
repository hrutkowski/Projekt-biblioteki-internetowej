#ifndef LOADER_HPP
#define LOADER_HPP

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "accountlist.hpp"
#include "booklist.hpp"

class loader
{
public:
    loader();
    virtual void loadDataBase(std::string filepath) = 0;
    std::ifstream inFile;
    std::ofstream outFile;
    AccountList *AccList;
    BookList *BkList;
};

#endif // LOADER_HPP