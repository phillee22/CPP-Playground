#pragma once

#include <iostream>
#include <fstream>
#include <string>
//#include <cstring>

class FileReader
{
private:
	std::string strs[20];

public:
	FileReader();
	FileReader(std::string fname);
	//~FileReader();
	int Read(std::string fname, std::string *lines, int linecount);
};

