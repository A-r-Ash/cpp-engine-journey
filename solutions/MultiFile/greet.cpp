#include "greet.h"

std::string greet(std::string_view name)
{
    return "Hello, " + std::string(name) + "!";
}

std::string sign_off()
{
    return "Goodbye";
}