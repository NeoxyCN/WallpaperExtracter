#pragma once
#include <vector>
#include <string>

namespace utils{
	void getFiles(std::string path, std::vector<std::string>& list);
	std::string getUsername();
	void copyFile(std::string from_path, std::string to_path);
	void changeName(std::string path, std::string new_name);
}