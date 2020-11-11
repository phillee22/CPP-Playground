
#include "FileReader.h"

FileReader::FileReader()
{
	strs[0] = "first";
}

FileReader::FileReader(std::string fname)
{
	int i = 0;
	std::string line;

	std::ifstream myfile(fname);
	if (myfile.is_open())
	{
		while ( getline(myfile, strs[i]) && (i < 20) )
		{
			/*
			size_t comma = line.find(',');

			char buffer[20];

			std::size_t length = line.copy(buffer, line.length() - comma, comma);
			buffer[length] = '\0';

			*(strarray + i) = new string(buffer);

			//std::strcpy(strarray[i]->c_str, line.c_str);
			//strcpy(*(strarray + i), line);
		*/
			i++;
		}
		myfile.close();
	}
}

int FileReader::Read(std::string fname, std::string *lines, int buffercount)
{
	int i = 0;

	std::ifstream myfile(fname);
	if (myfile.is_open())
	{
		while (getline(myfile, *(lines+i)) && (i < buffercount))
		{
			i++;
		}
		myfile.close();
	}
	return(i);
}

