#include "bookloader.hpp"


bookloader::bookloader()
{

}

void bookloader::changeList(BookList &bookList)
{
    BkList = &bookList;
}

void bookloader::loadDataBase(std::string filepath)
{
    std::ifstream file(filepath);

    string title, author, line;
    bool taken;


    if (file.is_open())
    {
        while (getline(file, line))
        {
            istringstream iss(line);
            if (!(iss >> author >> title >> taken)) { break; }
            Book* ptr = new Book(title, author, taken);
            cout << ptr->author() << " " << ptr->title() << " " << ptr->isTaken() << endl; //test
            BkList->add(*ptr);
        }
    }
}

void bookloader::saveDataBase(std::string filepath)
{
    std::ofstream file(filepath, fstream::out);
    BookIt iter;

    if (file.is_open())
    {
        for(auto &iter : BkList->listGet())
        {
            file << iter.author() << " " << iter.title() << " " << iter.isTaken() << endl;
        }
    }
}