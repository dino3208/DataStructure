#include "HashTable.h"
#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	HashTable table;

	// 키-값 데이터 추가
	table.Add("Jay", "010-1234-5678");

	// 중복 키 추가 확인
	if (!table.Add("Jay", "010-1234-4849"))
	{
		std::cout << "Same key already exists.\n";
	}

	table.Add("Jay", "010-1234-5678");
	table.Add("Hyun", "010-1234-5678");
	table.Add("Bae", "010-1234-5678");

	// 출력
	std::cout << "\nAll Data\n";
	table.Print();

	// 검색
	std::string number;
	if (table.Find("Jay", number))
	{
		std::cout << "\nSearch Result: Jay, " << number << "\n";
	}

	// 삭제
	if (table.Delete("Hyun"))
	{
		std::cout << "Hyun deleted\n";
	}

	// 출력
	std::cout << "\nDeleted Data\n";
	table.Print();
}