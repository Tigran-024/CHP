#pragma once
#include "ZIP.h"
class RLE : public ZIP
{
public:
	RLE();
	~RLE() override;
	std::string Zip(const std::string& text) override;
	std::string Unzip(const std::string& zip) override;
};