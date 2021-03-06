int small(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int gcd(int a, int b) {
    if (a == 0)
        return b;
    else if (b == 0)
        return a;

    if (a < b)
        return gcd(a, b-a);
    else
        return gcd(b, a-b);
}


int lcm(int a, int b) {
    return ((a * b) / gcd(a, b));
}
