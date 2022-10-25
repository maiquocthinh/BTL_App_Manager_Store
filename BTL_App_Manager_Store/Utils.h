#include <vector>
#include <string>
#include <sstream>
#pragma once

namespace MyUtils {
	// Chuyển đổi từ System::String^ thành std::string
	std::string toStdString(System::String^ systemString) {
		array<System::Byte>^ bytes = System::Text::Encoding::UTF8->GetBytes(systemString);
		char* chars = new char[bytes->Length + 1];
		System::Runtime::InteropServices::Marshal::Copy(bytes, 0, System::IntPtr(chars), bytes->Length);
		chars[bytes->Length] = '\0';
		std::string stdString = std::string(chars);
		delete chars;
		return stdString;
	}
	// Chuyển đổi từ std::string thành System::String^
	System::String^ toSystemString(std::string stdString) {
		array<System::Byte>^ bytes = gcnew array<System::Byte>(stdString.length());
		int i = stdString.length();
		while (i-- > 0)
			bytes[i] = stdString[i];
		return System::Text::Encoding::UTF8->GetString(bytes);
	}
	// Chuyển đổi số thành std::string
	std::string intToStdString(int num) {
		std::stringstream ss; ss << num;
		return ss.str();
	}
	// Phân tách 1 chuỗi dược phân cách bằng các ký tự `token` thành danh sách các chuỗi nhỏ
	std::vector<std::string> split(std::string str, std::string token) {
		std::vector<std::string> result;
		while (str.size()) {
			int index = str.find(token);
			if (index != std::string::npos) {
				result.push_back(str.substr(0, index));
				str = str.substr(index + token.size());
				if (str.size() == 0) result.push_back(str);
			}
			else {
				result.push_back(str);
				str = "";
			}
		}
		return result;
	}
}
