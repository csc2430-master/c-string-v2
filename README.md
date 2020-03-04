# A String class
A String class implemented with an underlying dynamically allocated c-string, with overloaded operators.

## Provide the requested
In the following subsections some questions are presented, please answer them right here in this document before you push your final solution.

### What is the output of the program? (Copy it between the ticks)
```
Copy your output HERE

```

### Show the output of running `valgrind` on your program
```
Copy valgrind output HERE

```

### What is the output of the following segment of code? (Explain why)
```c++
    CString a = " our Father";
    cout << a.c_str() << endl;
    a[0] = 'y';
    cout << a.c_str() << endl;
```

### Why did we implement two `operator+=`?
```c++
    const CString& operator+=(const char* sz);
    const CString& operator+=(const CString& rhs);
```

### Explain in your own words the "Rule of Three" and why it is important


 
