# Chapter 2: Variables and Basic Types

* [2.1. Primitive Built-in Types](#21-primitive-built-in-types)

## 2.1. Primitive Built-in Types

- Avoid undefined and implementation-defined behaviour:
  - Undefined behaviour can appear to execute correctly on some compilers, but not others, and it may not work correctly in the next run on the same compiler.
  - Avoid implementation-defined because the code is nonportable. For example, assuming `int` is a fixed size.
- Be careful with expression with unsigned type
- Don't mix signed and unsigned type

```
unsigned int u = 10;
int i = -42;
std::cout << i + i << std::endl; // -84
std::cout << u + i << std::endl; // if 32-bit int, prints 4294967264
```

```c
// infinite loop
for (unsigned int u = 10; u >= 0; --u)
    std::cout << u << std::endl;
```



