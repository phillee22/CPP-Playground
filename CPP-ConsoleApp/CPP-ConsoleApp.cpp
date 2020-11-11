// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include "time.h"
#include "class1.h"
#include "FileReader.h"
#include "TreeNode.h"
#include "TreeWalker.h"

int main()
{
    const int LINECOUNT = 20;
    std::string lines[LINECOUNT];


#if 0
    //FileReader* fr = new FileReader(".\\random_strings.txt");
    FileReader* fr = new FileReader();
    int strcount = fr->Read(".\\random_strings.txt", lines, LINECOUNT);
    fr = nullptr;
#else
    int strcount = FileReader().Read(".\\random_strings.txt", lines, LINECOUNT);
#endif


    for (int i = 0; i < strcount; i++)
    {
        //std::cout << *(lines + i) << "\n";
        std::cout << lines[i] << "\n";
    }


    std::cout << "Read the file into a buffer - from SO...\n";
    std::ifstream ifs(".\\random_strings.txt");
    std::string content((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
    std::cout << content << "\n";


    /*
     *   TREENODE
     */
    std::srand(time(0));
    int values[LINECOUNT]; // = { 13,8,29,48,4903,238,27,57,1,59,845,37,853,37,12,45,81,58,7298,938 };
    std::cout << "Here's the list of numbers:\n";
    for (int i = 0; i < LINECOUNT; i++)
    {
        values[i] = std::rand() % 1000;
        //*(values+i) = std::rand() % 1000;
        std::cout << *(values + i) << "\n";
    }
    TreeNode* root = new TreeNode();
    for (int i = 0; i < LINECOUNT; i++)
    {
        root->Insert(values[i]);
    }

    TreeWalker w;
    std::cout << "Walking the tree in sorted order:\n";
    w.SortedOrder(root);

    std::cout << "Walking the tree in reverse order:\n";
    w.ReverseOrder(root);


    std::cout << "All done!\n";
    return 0;
}

void strManipulation()
{
    class1 c12;
    //class1* c1 = new class1();
    class1* c1 = &c12;

    const char* sptr = 0;

    c12.s = "foo\n";

    c1->s = "Hello World!\n";

    std::string s = c1->s;

    sptr = c1->s.c_str();

    c1->s = c12.s;
    const char** sptrptr = &sptr;

    c12.s = "bar";
    const char* schar = s.c_str();
    std::cout << schar;
}
