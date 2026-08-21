#include "Queue.h"
#include <iostream>
#include <queue>

int main()
{
	// STL의 queue 사용법
	// std::queue<int> testQueue;
	// testQueue.push(10);
	// testQueue.emplace();
	// int refValue = testQueue.front();
	// testQueue.pop();


	const size_t count = 5;

	Queue<int, 5> queue;

	// 큐에 데이터 추가
	for(int ix = 0; ix < count + 1; ++ix)
	{
		if (!queue.Enqueue(ix + 1))
		{
			std::cout << "failed to save\n";
		}
	}

	// 큐에 저장된 데이터 출력
	queue.Print();

	// 맨 앞 데이터 읽기
	int firstvalue = 0;
	if (queue.Front(firstvalue))
	{
		std::cout << "first data: " << firstvalue << "\n";
	}

	// 데이터 출력
	int outvalue = 0;
	if (queue.Dequeue(outvalue))
	{
		std::cout << "출력된 데이터: " << outvalue << "\n";
	}

	queue.Print();
}