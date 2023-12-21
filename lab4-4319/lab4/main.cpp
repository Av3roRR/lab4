#include<iostream>
#include<cmath>

using namespace std;

double perimetr(double x1, double y1, double x2, double y2, double x3, double y3) {
	double fline, sline, tline;
	fline = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	sline = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	tline = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	return fline + sline + tline;
}

int main() {
	double x1, y1, x2, y2, x3, y3, max_num = 0;
	for (int i = 0; i < 3; i++) {
		cout << "input first dot coords" << endl;
		cin >> x1 >> y1;
		cout << "input second dot coords" << endl;
		cin >> x2 >> y2;
		cout << "input third dot coords" << endl;
		cin >> x3 >> y3;

		if (x1 == x2 && y1 == y2 || x1 == x3 && y1 == y3 || x2 == x3 && y2 == y3) {
			cout << "The entered values are incorrect\n";
		}
		else {
			double p = perimetr(x1, y1, x2, y2, x3, y3);
			if (p > max_num) {
				max_num = p;
			}
		}	
	}
	cout << max_num << endl;
}