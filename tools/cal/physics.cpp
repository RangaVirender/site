#include <cmath>

extern "C" {

double coulomb_barrier(int Z1, int Z2, double R) {
    const double e2 = 1.44; // MeV·fm
    return (Z1 * Z2 * e2) / R;
}

double rutherford_cs(double theta_deg, int Z1, int Z2, double E) {
    const double e2 = 1.44;
    double theta = theta_deg * M_PI / 180.0;
    double factor = (Z1 * Z2 * e2 / (4 * E));
    return pow(factor / sin(theta/2), 4);
}

}