/*
 * main.cpp
 * 
 * Copyright 2025 Filliper <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <iostream>
#include <fstream>

/*
 * create a bad file without permitions
 * chmod
 * 
 */


int main()
{
	std::ofstream	outfile;
	//outfile.open("file.txt");  first exemple
	outfile.open("file.txt", std::ofstream::app);    //write the content below previous content
	
	if (outfile.fail())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	
	outfile << "content in file.txt" << std::endl;
	double x = 2.3;
	int i = 55;
	std::string s = "hello how are you?";
	outfile << x << std::endl;
	outfile << i << std::endl;
	outfile << s << std::endl;

	outfile.close();
	
	
	outfile.open("badfile.txt");
	
	if (outfile.fail())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	
	
	
	outfile << "content" << std::endl;
	outfile.close();
	
	
	return(0);
}
