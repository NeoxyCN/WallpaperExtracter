#include <vector>
#include <string>
#include <iostream>

#include "utils.h"

std::string end=
"\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\Assets";
std::string path;


int main() {
	std::vector<std::string> list;
	
	path.append("C:\\Users\\")
		.append(utils::getUsername())
		.append(end);
	utils::getFiles(path,list);
	int i = list.size();

	std::cout << "���ҵ�: " << i << " ���ܵı�ֽ�ļ�" << std::endl;
	
	std::vector<std::string>::iterator it;
	for (it = list.begin(); it != list.end(); it++) {
		std::cout << "����:" << *it << std::endl;
	}
}