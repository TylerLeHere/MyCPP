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

```
// infinite loop
for (unsigned int u = 10; u >= 0; --u)
    std::cout << u << std::endl;
```


## 2.2. Variables

- Avoid uninitialized variables because they are hard to debug and what happens to them is undefined.
- Declaration: makes a name known to the program
- Definition: creates the associated entity, also allocates storage and may provide the variable with an initial value
- Declare but not define, use `extern` and may not provide an explicit initializer

Example:

```c
extern int i; // declares but does not define i
int j; // declares and defines j
```

- `extern` that has an initializer is a definition (i.e., `extern double pi = 3.14; // definition`)

## 2.3. Compound Types

- Compound type is a type that is defined in terms of another type
- Reference here means lvalue reference (section 13.6.1)
- A reference type refers to another type, of the form `&d`, where `d` is the name being declared

Example:

```c
int ival = 1024;
int &refVal = ival; // refVal refers to (is another name for) ival
int &refVal2; // error, a reference must be initialized
refVal = 2; // assign 2 to ival
int ii = refVal; // same as ii = ival
```

- A reference is not an object, just another name for an exisiting object

Example:

```c
int &refVal = 10; // error: initializer must be an object
```

- Pointer is a compound type that "point to" another type
- Pointer is an object, which is different from reference
- When a pointer points to an object, use deference operator (i.e., `*`) to access that object

Example

```c
int ival = 42;
int *p = &ival; // p holds the address of ival; p is a pointer to ival
cout << *p; // * yields the object to which p points; prints 42
```

- Note: some symbols have many meanings

Example:

```c
int i = 42;
int &r = i; // r is a reference
int *p;
p = &i; // & is the address-of operator
*p = i; // * is the deference operator
int &r2 = *p; // & is part of the declaration, * is the deference operator
```

- `void*`is a special pointer that can hold address of any object

- `int* p1, p2; // p1 is a pointer to int; p2 is an int`

- Writing `int* p;` is somewhat misleading because the base type of variable `p` is `int`, not `int*`. `*` modifies the type of `p`

- There is no limits to the number of type modifiers (i.e., `*`, `**`, `***`, etc.)

Example:

```c
int ival = 1024;
int *pi = &ival; // pi points to an int
int **ppi = &pi; // ppi points to a pointer to an int
```

```c
// Deferencing pointers
cout << "The value of ival\n"
    << "direct value: " << ival << "\n"
    << "indirect value: " << *pi << "\n" 
    << "doubly indirect value: " << **ppi << endl;
```

- We can have a reference to a pointer because a pointer is an object

Example:

```c
int i = 42;
int *p; // p is a pointer to int
int *&r = p; // r is a reference to the pointer p
r = &i; // r refers to a pointer; assigning &i to r makes p point to i
*r = 0; // dereferencing r yields i, the object to which p points; changes i to 0
```

- To understand complicated pointer or reference declarations, read them from right to left

## 2.4. `const` Qualifier

- `const` object must be initialized because we can't change the value of a `const`
- By default, `const` objects are loval to a file
- Use `extern` to share a `const` object among multiple files

Example:

```c
// file_1.cc defines and initializes a const that is accessible to other files extern const int bufSize = fcn();
// file_1.h
extern const int bufSize; // same bufSize as defined in file_1.cc
```

### 2.4.1. References to `const`

- `const` reference means reference to `const`. There is no such thing is `const` reference as a reference is not an object, we cannot make a reference itself `const`

Examples:

```c
const int ci = 1024;
const int &r1 = ci; // ok: both reference and underlying object are const
r1 = 42; // error: r1 is a reference to const
int &r2 = ci; // error: non const reference to a const object
```

```c
int i = 42;
const int &r1 = i; // we can bind a const int& to a plain int object
const int &r2 = 42; // ok: r1 is a reference to const
const int &r3 = r1 * 2; // ok: r3 is a reference to const
int &r4 = r * 2; // error: r4 is a plain, non const reference
```

- A reference to `const` may refer to an object that is NOT `const`. Thus, binding a reference to `const` to an object says nothing about whether the object is `const` or not.

Example:

```c
int i = 42;
int &r1 = i; // r1 bound to i
const int &r2 = i; // r2 also bound to i; but cannot be used to change i
r1 = 0; // r1 is not const; i is now 0
r2 = 0; // error: r2 is a reference to const
```

### 2.4.2. Pointers and `const`

- A pointer to `const` may not be used to change the object

Example:

```c
const double pi = 3.14; // pi is const; its value may not be changed
double *ptr = &pi; // error: ptr is a plain pointer
const double *cptr = &pi; // ok: cptr may point to a double that is const
*cptr = 42; // error: cannot assign to *cptr
```

- A pointer to `const` can points to a `nonconst` object

Example:

```c
double dval = 3.14; // dval is a double; its value can be changed
const double *cptr = &dval; // ok, but can't change dval through cptr
```

- A `const` pointer must be initialized, and its value (i.e., the address that it holds) may not be changed.
- A pointer to `const` is indicated by putting the `const` after `*`. This means it is a pointer, not a pointed-to-type that is `const`.

Example:

```c
int errNumb = 0;
int *const curErr = &errNumb; // curErr will always point to errNumb
const double pi = 3.14159;
const double *const pip = &pi; // pip is a const pointer to a const object
```

- In the example above, `pip` is a `const` pointer to `const`, so neither the value of the object (i.e., `pi`) nor the addresses stored in `pip` can be changed. However, `curErr` addresses a plain, `nonconst` int, so `curErr` can be used to change the value of `errNumb`.

Example:

```c
*pip = 2.72; // error; pip is a pointer to const
// if the object to which curErr points (i.e., errNumb) is nonzero
if (*curErr) {
 errorHandler();
 *curErr = 0; // ok: reset the value of the object to which curErr is bound
}
```

### 2.4.3. Top-level `const`

- Top-level `const` indicates the pointer itself is a `const`
- Low-level `const` indicates the pointer can point to a `const` object

Example:

```c
int i = 0;
int *const p1 = &i; // we can't change the value of p1; const is top-level
const int ci = 42; // we cannot change ci; const is top-level
const int *p2 = &ci; // we can change p2; const is low-level
const int *const p3 = p2; // right-most const is top-level, left-most is not
const int &r = ci; // const in reference types is always low-level
```

