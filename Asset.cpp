#include "Asset.h"

Asset::Asset(const char* id)
	: _id(id)
{
}

Asset::~Asset()
{
}

const char* const& Asset::id() const
{
	return _id;
}
