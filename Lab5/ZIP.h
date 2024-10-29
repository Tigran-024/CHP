#pragma once
#include <string>
class ZIP
{
public:
    virtual std::string Zip(const std::string& text) = 0;
    virtual std::string Unzip(const std::string& zip) = 0;
    virtual ~ZIP() = 0;
};