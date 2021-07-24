#pragma once
class Asset
{
public:
	Asset(const char* id);
	~Asset();

	const char* const& id() const;

private:
	const char* _id;
};

