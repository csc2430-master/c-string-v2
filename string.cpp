//
// Created by Arias Arevalo, Carlos on 3/4/20.
//

#include "string.h"
#include <cstring>

/**
 * Discussed in previous class
 */
CString::CString() {
    _CString = new char[1];
    _CString[0] = '\0';
}

/**
 * Discussed in previous class
 */
CString::CString(const CString &copyFromMe) {
    _CString = new char[strlen(copyFromMe._CString) + 1];
    strcpy(_CString, copyFromMe._CString);
}

/**
 * Discussed in previous class
 */
CString::CString(const char *sz) {
    _CString = new char[strlen(sz) + 1];
    strcpy(_CString, sz);
}

/**
 * Discussed in previous class
 */
CString::~CString() {
    delete[] _CString;
}

/**
 * Discussed in previous class, but implement by yourself
 *
 * Implement this method!
 *
 */
const CString &CString::operator=(const CString &rhs) {
    return *this;
}

/**
 * Concatenates two this with the left hand side (sz) and stores the
 * result in this. Returns this when it finishes.
 *
 * Implement this method!
 *
 * @param sz the c-string to concatenate with this
 * @return *this with sz appended to the end
 */
const CString &CString::operator+=(const char *sz) {
    return *this;
}
/**
 * Concatenates two this with the left hand side (lhs) and stores the
 * result in this. Returns *this when it finishes.
 *
 * Implement this method!
 *
 * @param lhs the CString to concatenate with this
 * @return *this with sz appended to the end
 */
const CString &CString::operator+=(const CString &rhs) {
    return *this;
}
/**
 * Trivial: returns the length of the string
 * @return the number of characters before the '\0' in the string.
 */
size_t CString::length() const {
    return strlen(_CString);
}

/**
 * Trivial: returns the length of the string
 * @return the number of characters before the '\0' in the string.
 */
size_t CString::size() const {
    return strlen(_CString);
}
/**
 * Returns the pointer to the underlying c-string. Be careful with this
 * method as it will return to the pointer to the string when it's called
 * and that pointer may change at a later moment.
 *
 * Implement this method!
 *
 * @return the pointer to the underlying c-string
 */
const char *CString::c_str() const {
    return _CString;
}
/**
 * Subscript operator to access individual characters on the CString. Notice
 * that it returns char by reference, so we can use it to MODIFY a char inside
 * the CString. It is the responsibility of the user to make sure that index
 * does not cause a buffer overrun.
 *
 * Implement this method!
 *
 * @param index the position of the character that we want to access
 * @return the character at position index
 */
char &CString::operator[](size_t index) {
    return _CString[0];
}

/**
 * THIS IS NOT A METHOD! That's why it doesn't have CString::
 * This function will use the += operator to add two CString together.
 * CString a = "Hello ";
 * CString b = "World";
 * CString c;
 * c = a + b; // Results assigning "Hello World" to c, WITHOUT changing a or b
 *
 * Implement this method!
 *
 * @param lhs the left hand side string
 * @param rhs the right hand side string
 * @return the concatenation of lhs with rhs in a newly created string
 */
CString operator+(const CString &lhs, const CString &rhs) {
    return CString();
}
