#include "logic.h"

bool check_if(int x1,int y1,int x2,int y2) {
	if ((x1 <= 0 || x1 > 8) || (x2 <= 0 || x2 > 8) || (y1 <= 0 || y1 > 8) || (y2 <= 0 || y2 > 8)) {
		return false;
	}

	return (x1 + y1) % 2 == (x2 + y2) % 2;
}