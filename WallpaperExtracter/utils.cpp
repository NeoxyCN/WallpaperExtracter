#include <vector>
#include <string>
#include <filesystem>
#include <windows.h>
#include <Lmcons.h>

namespace utils {
	void getFiles(std::string path, std::vector<std::string>& list) {
		for (const auto& file : std::filesystem::directory_iterator(path)) {
			list.push_back(file.path().string());
		}
	}

	std::string getUsername() {
		TCHAR name[UNLEN + 1];
		DWORD size = UNLEN + 1;

		if (GetUserName((TCHAR*)name, &size)) {
			std::wstring ws = name;
			std::string username(ws.begin(), ws.end());
			return username;
		}
	}

	void copyFile(std::string from_path, std::string to_path) {

	}

	void changeName(std::string path, std::string new_name){

		}

	// TODO: change output by language
	std::string getSysLang() {
		GetUserDefaultUILanguage();
	}
}