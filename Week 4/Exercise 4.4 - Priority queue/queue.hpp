// Schrijf de header-file van de priority queue. In de header 
// staat onder andere de definitie van de struct Queue.

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <vector>
#include <iostream>

struct Queue {
	std::vector<float> v = {};
	int head = 0;
	int tail = 0;
};

void init_queue (Queue & pq);

void enqueue (Queue & pq, float data);

float dequeue (Queue & pq);

float show (const Queue & pq);

#endif /* QUEUE_HPP */
