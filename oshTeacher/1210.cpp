int main() {
   cout << maskDigits(19683) << endl;  // prints *****
   cout << maskDigits(19) << endl;  // prints **
   cout << maskDigits(1) << endl;  // prints *
   return 0;
}
                    // 19683
string maskDigits(int a){
    if (a<=0) return "";
    return "*" + maskDigits(19683 / 10);    q
}

return "*" + maskDigits(19683 / 10)

            return "*" + maskDigits(1968 / 10)

                         return "*" + maskDigits(196 / 10)

                                      return "*" + "*" + ""

                                                    return "*" + ""


                                                    if (a<=0) return ""                   