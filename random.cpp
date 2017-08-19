#include "random.h"

#include <cstdlib>
#include <ctime>

namespace Random {
	void init() {
		srand(time(nullptr));
	}

	int random(int low, int high) {
		return rand() % (high - low + 1) + low;
	}

	float random(float low, float high) {
		int newLow = low * 1000000;
		int newHigh = high * 1000000;
		return random(newLow, newHigh) / 1000000;
	}
}