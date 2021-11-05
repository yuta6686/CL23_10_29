#pragma once
#include <string>

class Pet
{
public:
	Pet() = delete;	//	デフォルトコンストラクタ禁止条例

	Pet(const std::string& name) :m_name(name) {}

	void SetName(const std::string& name) { m_name = name; }

	virtual void Action(void) = 0;

private:
	std::string m_name;

protected:
	const std::string& GetName(void) { return m_name; }
};

