int average(a[])

int main() {
    int a[] = {10, 20, 30};
    double x;
    string b = "thing1", c = "thing2";
    // set x to be the average of a[0], a[1] and a[2]
    x = average(a[0], a[1], a[2]); // (a)
    cout << x << endl;
    // print the average to screen
    average(a, 3); // (b)
    // print to screen: The strings are thing1 and thing2
    cout << "The strings are " << whatStrings(b, c) << endl; // (c)
    if (mystery(mystery(function()))) // (d)
    cout << mystery(function()) << endl; // (e)
    return 0;
}