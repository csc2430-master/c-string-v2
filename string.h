//
// Created by Arias Arevalo, Carlos on 3/4/20.
//

#ifndef C_STRING_V2_STRING_H
#define C_STRING_V2_STRING_H


#include <cstring>

class CString {
    char* _CString;
public:
    CString();
    CString(const CString& copyFromMe);
    CString(const char* sz);
    ~CString();

    const CString& operator=(const CString& rhs);
    const CString& operator+=(const char* sz);
    const CString& operator+=(const CString& rhs);
    char& operator[](size_t index);

    size_t length()const;
    size_t size()const;
    const char* c_str()const;
};

CString operator+(const CString& lhs, const CString& rhs);


#endif //C_STRING_V2_STRING_H
