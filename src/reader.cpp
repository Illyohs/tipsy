#include "./includes/reader.hpp"

void Reader::setName(std::string name)
{
    _name = name;
}


void Reader::setVersion(std::string version)
{
    _version = version;
}

void Reader::setAuthors(std::vector<std::string> authors)
{
    _authors = authors;
}

void Reader::setTricks(std::vector<std::string> tricks)
{
    _tricks = tricks;
}

void Reader::setExe(std::string exe)
{
    _exe = exe;
}

std::string Reader::getName() const
{
    return _name;
}

std::string Reader::getVersion() const
{
    return _version;
}

std::vector<std::string> Reader::getAuthors() const
{
    return _authors; 
}


std::vector<std::string> Reader::getTricks() const
{
    return _tricks;
}

std::string Reader::getExe() const
{
    return _exe;
}