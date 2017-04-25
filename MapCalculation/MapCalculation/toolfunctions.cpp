#include "toolfunctions.h";
#include <math.h>

double dist(double x1, double y1, double x2, double y2) {
	double dx = x2 - x1;
	double dy = y2 - y1;
	return sqrt(dx*dx + dy*dy);
}

void normalize(double &vx, double &vy) {
	double len = sqrt(vx*vx + vy*vy);
	vx /= len;
	vy /= len;
}

bool vec_equal_dir(double vx, double vy, double ux, double uy) {
	if ((vx > 0 && ux > 0) || (vx < 0 && ux < 0)) {
		if ((vy > 0 && uy > 0) || (vy < 0 && uy < 0)) {
			return true;
		}
	}
	return false;
}
bool vec_equal(double vx, double vy, double ux, double uy) {
	if ((vx > 0 && ux > 0) || (vx < 0 && ux < 0)) {
		if ((vy > 0 && uy > 0) || (vy < 0 && uy < 0)) {
			double dtx = tan(vy / vx) - tan(uy / ux);
			if (dtx < 0.1) return true;
		}
	}
	return false;
}

bool compare(__int64 i, __int64 j) {
	return i < j;
}