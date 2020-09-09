#include "queue.hpp"

int main () {
	Queue q;
	init_queue(q);
	
	enqueue(q, 5.43);
	enqueue(q, 7.2);
	enqueue(q, 3.90);

	std::cout << dequeue(q)	<< "\n";
	std::cout << show(q) 	<< "\n";
	std::cout << dequeue(q) << "\n";
	std::cout << dequeue(q) << "\n";
	
}
