#include "logic.h"
int main() {
	int x1, y1, x2, y2;
	

	cout << " input 4 coords (x1 y1 x2 y2): " << endl;
	cin >> x1;
	cin >> x2;
	cin >> y1;
	cin >> y2;

	bool check = check_if(x1, y1, x2, y2);
	cout << check << endl;
	return 0;
}
