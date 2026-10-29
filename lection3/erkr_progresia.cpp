double tarr(double b1, double q, int n) {
    if (n == 1) return b1; // base case
    return tarr(b1, q, n - 1) * q; 
}
double getSum(double b1, double q, int n) {
    if (n == 1) return b1; // base case
    return getSum(b1, q, n - 1) + tarr(b1, q, n); 
}
