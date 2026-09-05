#include <iostream>
#include <string>
#include <string_view>
#include <vector>

#include "StringUtils.h"

int main()
{
	std::vector<std::string> words{};

	while (true)
	{
		std::cout << "> ";

		std::string line{};
		std::getline(std::cin, line);

		const std::string_view trimmed{ trim(line) };
		if (trimmed.empty())
		{
			continue;
		}

		const std::vector<std::string_view> rawParts{ split(trimmed, ' ') };
		std::vector<std::string_view> parts{};
		for (const std::string_view part : rawParts)
		{
			if (!part.empty())
			{
				parts.push_back(part);
			}
		}

		const std::string_view command{ parts[0] };

		if (command == "quit")
		{
			std::cout << "Bye.\n";
			break;
		}
		else if (command == "add")
		{
			if (parts.size() < 2)
			{
				std::cout << "Usage: add <word>\n";
				continue;
			}

			words.push_back(std::string{ parts[1] });
			std::cout << "Added \"" << parts[1] << "\".\n";
		}
		else if (command == "list")
		{
			std::vector<std::string_view> views{ words.begin(), words.end() };
			std::cout << join(views, ", ") << '\n';
		}
		else if (command == "find")
		{
			if (parts.size() < 2)
			{
				std::cout << "Usage: find <text>\n";
				continue;
			}

			const std::string_view needle{ parts[1] };
			bool found{ false };
			for (std::size_t i = 0; i < words.size(); ++i)
			{
				if (words[i].contains(needle))
				{
					if (found)
					{
						std::cout << ", ";
					}
					else
					{
						std::cout << "\"" << needle << "\" found in: ";
					}
					std::cout << words[i];
					found = true;
				}
			}

			if (found)
			{
				std::cout << '\n';
			}
			else
			{
				std::cout << "\"" << needle << "\" not found.\n";
			}
		}
		else
		{
			std::cout << "Unknown command: " << command << '\n';
		}
	}

	return 0;
}