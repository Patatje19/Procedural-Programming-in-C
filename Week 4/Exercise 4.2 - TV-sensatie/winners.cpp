// Schrijf een programma die deze berekeningen uitvoert. Een header-file en de main-file
// zijn al geschreven. Verander de source file ’winners.cpp’ zodat het programma werkt.

#include "winners.hpp"

float averageScore (const vector<float> & scores) {
	float value = 0.0;
	
	for (int i = 0; i < scores.size(); i++) {
		value += scores[i];
	}
	
	return value / scores.size();
	
}

float nearestScore2Average(const vector<float> & scores) { 
	float nearest = 0;
	float smaller = 0;
	
	float diffrence = 0;
	
	float average = averageScore(scores);
	
	for (int i = 0; i < scores.size(); i++) {
		diffrence = scores[i] - average;
		
		if (diffrence <= smaller) {
			smaller = diffrence;
			nearest = scores[i];
		}
	}
	
	return nearest;
	
}

float furthestScoreFromWinner(const vector<float> & scores) { 
	float furthest = 0;
	float bigger = 0;
	
	float diffrence = 0;
	
	float nearest = nearestScore2Average(scores);
	
	for (int i = 0; i < scores.size(); i++) {
		diffrence = scores[i] - nearest;
		
		if (diffrence >= bigger) {
			bigger = diffrence;
			furthest = scores[i];
		}
	}
 
	return furthest;
	
}
