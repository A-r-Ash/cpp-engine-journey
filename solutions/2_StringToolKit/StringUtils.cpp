#include "StringUtils.h"

std::string_view trim(std::string_view sv)
{
	constexpr std::string_view spaces{ " \t\n\r\f\v" };

	std::size_t start = sv.find_first_not_of(spaces);

	if (start == std::string_view::npos)
	{
		return {};
	}

	std::size_t end = sv.find_last_not_of(spaces);
	return sv.substr(start, end - start + 1);
}

std::vector<std::string_view> split(std::string_view sv, char delim)
{
    std::vector<std::string_view> tokens;
    std::size_t start = 0;

    while (true)
    {
        std::size_t pos = sv.find(delim, start);   // look for the NEXT delimiter from `start`
        if (pos == std::string_view::npos)
        {
            tokens.push_back(sv.substr(start));    // no more delimiters: last token to end
            break;
        }
        tokens.push_back(sv.substr(start, pos - start)); // one token: from start up to the delimiter
        start = pos + 1;                            // keep searching after the delimiter
    }
    return tokens;
}

std::string join(const std::vector<std::string_view>& tokens, std::string_view sep)
{
	std::string result{};

	for (std::size_t i = 0; i < tokens.size(); ++i)
	{
		if (i > 0)
		{
			result.append(sep);
		}
		result.append(tokens[i]);
	}

	return result;
}  