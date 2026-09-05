#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <string>
#include <string_view>
#include <vector>

std::string_view trim(std::string_view sv);
std::vector<std::string_view> split(std::string_view sv, char delim);
std::string join(const std::vector<std::string_view>& tokens, std::string_view sep);

#endif