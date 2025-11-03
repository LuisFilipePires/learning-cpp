
#include <iostream>
#include <fstream>



int main()
{
	
	std::ifstream inFile;
	
	inFile.open("file1.txt");
	if (inFile.fail())
	{
		std::cout << "error open file" << std::endl;
		return(1);
	}
	int number = 0;
	
	inFile >> number;
	inFile >> number;
	if (inFile.fail())
	{
		std::cout << "error file format" << std::endl;
		return (1);	
	}
	
	std::cout << number << std::endl;
	inFile.close();
	
	
	std::ifstream inFile2;
	inFile2.open("file2.txt");
	if (inFile2.fail())
	{
		std::cout << "Error opening file 2" << std::endl;
		return(1);
	}
	
/*	double x1, x2, x3 = 0;
	while (true)
	{
		inFile2 >> x1 >> x2 >> x3;
		if(inFile2.eof())
			break;
		else
			std::cout << x1 << " " << x2 << " " << x3 << std::endl;	
	}*/
	
	/*std::ifstream inFile3;
	infile3.open("file3.txt");
	if (inFile3.fail())
	{
		std::cout << "error open file3.txt" << std::endl;
		return (1);
	}*/
	
	double a[3][3];
	int i = 0;
	int j;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			inFile2 >> a[i][j];
			j++;
		}
		//std::cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << std::endl;
		i++;
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	
	std::ifstream inFile3;
	inFile3.open("file3.txt");
	if (inFile3.fail())
	{
		std::cout << "Error opening file 3" << std::endl;
		return(1);
	}
	
	std::string  line;
	
	inFile3 >> line;
	std::cout << line << std::endl;   // output: "This"
	
	getline(inFile3, line);
	std::cout << line << std::endl; // rest of the pointer string
	
	
	
	return (0);
}
