//B411063 김형석 2학년
#include "maxheap.h"
int main() {
	Maxheap<int> H(10);
	H.Push(15);
	H.Push(14);
	H.Push(21);
	H.Push(2);
	H.Push(10);
	H.Push(20);

	cout << H;

	while (!H.IsEmpty())
	{
		cout << H.Top() << " ";
		H.Pop();
	}
	cout << endl;
}
