// write bool streq(const char * lhs, const char * rhs)
// using no helper functions, no temp variables, and only one loop
// should return true if the given strings are equal (same length and characters)
// nullptr is a possible value for the parameters

bool streq(const char* lhs, const char* rhs) {
    if (lhs == rhs) { return true; } // if both are same address or nullptr
    if (!lhs || !rhs) { return false; } // if one side is nullptr

    while (*lhs == *rhs) {
        if (*lhs == '\0') { return true; } // means *rhs == \0 is also true
        lhs++;
        rhs++;
    }

    return false;
}
