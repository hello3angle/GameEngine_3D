#pragma once
#include <iostream>
#include <map>

class Assets
{
public:
	Assets();
	~Assets();

	class Asset*get_asset(const char* id) const;

private:
	std::map<const char*, Asset*> _assets;
};

