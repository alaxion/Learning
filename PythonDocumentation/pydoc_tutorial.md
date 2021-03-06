pydoc_tutorial.md

Python Tutorial (3.8.3)
================================================================================

A~0f27

The tutorial informally introduces basic concepts and features of Python;  
For standard objects and modules, see *library-index*;  
For a more formal definition of the language, see *reference-index*;  
To write extensions in C/C++, read *extending-index* and *c-api-index*

Chapter 1 Whetting Your Appetite
--------------------------------------------------------------------------------

Python is just the language for you:

Shell scripts are best at moving around files and changing text data, but not GUI apps;  
C/C++ takes a lot of development time.

Python offers more structre and support for large programs than shell;  
On the other hand, more error cheching than C.

The interpreter can be used to experiment with features, to write throw-away programs, to test functions during bottom-up program development, or as a desk calculator.

Programs written in Pyton are typically much shorter than C/C++:
1. high-level data types make complex operations in a single statement
2. statement grouping by indentation instead of brackets
3. no variable declarations

Extensibility: easy to add new built-in functions or module in C to the interpreter, either to perform critical operations at max speed, or to link Python programs to libs that may only be avaiable in binary form.

By the way, the language is named after the BBC show "Monty Python’s Flying Circus" and has nothing to do with
reptiles.

Chapter 2 Using the Python Interpreter
--------------------------------------------------------------------------------

### 2.2 The Interpreter and Its Environment

#### 2.2.1 Source Code Encoding

Python source files are treated as encoded in UTF-8 by default;  
To declare another encoding, add a special comment at first line of file, like:  
`# -*- coding: cp1252 -*-`.

One exception to the first line rule is a UNIX "shebang" line, like:  
`#!/usr/bin/env python3`  
`# -*- coding: cp1252 -*-`

Chapter 3 An Informal Introduction to Python
--------------------------------------------------------------------------------

Comments start with the hash character `#`, and extend to the end of the physical line.

### 3.1 Using Python as a Calculator

#### 3.1.1 Numbers

Operators: `+` `-` `*` `/` `//` `%` `**`

Division `/` always returns a float, `//` returns int.

In interactive mode, the last printed expression is assigned to variable `_`.

In addition to int and float, there are other types of numbers: `Decimal` and `Fraction`.

Built-in support for complex numbers, use `j` or `J` suffix to indicate imaginary part (3+5j).

#### 3.1.2 Strings

- strings enclosed in `'...'` or `"..."`
- concatenate by `+`
- repeat by `*`
- strings can be indexed
- strings are immutable (cannot assign)

#### 3.1.3 Lists

- `lst = [1, 2, 3]`
- negative index (start with -1)
- slice (end index exclusive)
- concatenation: `[1, 2] + [3, 4]`
- `list.append()`
- assignment to slices: `lst[2:4] = [4, 5]`
- `len(lst)`

### 3.2 First Steps Towards Programming

- multiple assignment: `a, b = 0, 1`
- in conditions, zero and empty sequences are false
- in `print()`
  - items are split by a space
  - the keyword argument `end` can be used to avoid newline or end output with custom string: `print(a, end=',')`

Chapter 4 More Control Flow Tools
--------------------------------------------------------------------------------

### 4.1 `if` Statements

- `if` `elif` `else`
- `if...elif...elif...` sequence is a subtitute for switch or case statements in other languages

### 4.2 `for` Statements

- python's `for` iterates over items of any sequence

### 4.3 The `range()` Function

- `range(end)`
- `range(beg, end, step)`
- to iterate over indices of a sequence:
  - `range(len(lst))`
  - `enumerate(lst)`
- to get a list from a range: `list(rang(7))`

### 4.4 `break` and `continue` Statements, and `else` Clauses on Loops

- loops can have an `else` clause, executed when the loop terminated *not* by a `break`
- `try` (exception handling) can also have a `else`, runs when no exception occurs

### 4.5 `pass` Statements

`pass` does nothing, like `;` in C

### 4.6 Defining Functions

- `def functionName(formalParameters):`
- first line of function body can optionally be a string literal, as documentation string, or docstring
- `global` `nonlocal`
- even functions without a return do return a value: `None`

### 4.7 More on Defining Functions

Arguments of functions have 3 forms:

#### 4.7.1 Default Argument Values

- `def func(arg1, arg2=2, arg3="hi"):`
- `in` tests whether sequence contains
- **important warning**: the default value evaluated only once, if the default is a mutable (list, dict, instance of classes), the result will accumulate:
```py
def f(a, L=[]):
    L.append(a)
    return L

f(1)
f(2)
# will get
[1]
[1, 2]

# to avoid:
def f(a, L=None):
    if L is None:
        L = []
    L.append(a)
    return L
```

#### 4.7.2 Keyword Arguments

- use keyword arg can ignore order of args:
  - `func(1, arg4=[1], arg3="hello")`
  - but keyword args must follow positional args
- a final formal parameter of the form `**name` receives a dictionary containing all keyword arguments except for those corresponding to a formal parameter
- this may be combined with a formal parameter of the form `*name` which receives a tuple containing the positional arguments beyond the formal parameter list
- `*name` must occur before `**name`

#### 4.7.3 Special Parameters

```py
def f(pos1, pos2, /, pos_or_kwd, *, kwd1, kwd2):
      -----------    ----------     ----------
          |              |              |
          |     Positional or keyword   |
          |                             - Keyword only
          -- Positional only
```

Use case of the 3 parameters:
- Use positional-only if you want the name of the parameters to not be available to the user. This is useful when parameter names have no real meaning, if you want to enforce the order of the arguments when the function is called or if you need to take some positional parameters and arbitrary keywords.
- Use keyword-only when names have meaning and the function definition is more understandable by being explicit with names or you want to prevent users relying on the position of the argument being passed.
- For an API, use positional-only to prevent breaking API changes if the parameter’s name is modified in the future.

#### 4.7.4 Arbitary Argument Lists

- `def f(*args)`
- the args will be wrapped up in a tuple

#### 4.7.5 Unpacking Argument Lists

- when args are already in a list or tuple but need to be unpacked for a function call requiring separate positional args:
  - use `*` to unpack list or tuple
  - `range(*lst)`
- use `**` to unpack dict

#### 4.7.6 Lambda Expressions

- small anonymous functions can be created with the `lambda` keyword
- `lambda a, b: a+b` returns the sum of its two args
- lambda functions can be used wherever function objects are required
- lambdas are syntactically restricted to a single expression
- semantically, they are just syntactic sugar for a normal function definition
- like nested function definitions, lambda functions can reference variables from the containing scope

#### 4.7.7 Documentation Strings

- first line should always be a short, concise summary of purpose, begin with a capital letter and end with a period
- if there are more lines, the second line should be blank
- example:
```py
def my_function():
    """Do nothing, but document it.

    No, really, it doesn't do anything.
    """
    pass

>>> print(my_function.__doc__)
Do nothing, but document it.

    No, really, it doesn't do anything.
```

#### 4.7.8 Function Annotations

- function annotations are completely optional metadata information about the types used by user-defined functions
- annotations are stored in the `__annotations__` attribute of the function as a dictionary and have no effect on any other part of the function
- parameter annotations: `(param: str = "default")`
- return annotations: `f() -> int`

The following example has a positional argument, a keyword argument, and the return value annotated:
```py
>>> def f(ham: str, eggs: str = 'eggs') -> str:
...     print("Annotations:", f.__annotations__)
...     print("Arguments:", ham, eggs)
...     return ham + ' and ' + eggs
...
>>> f('spam')
Annotations: {'ham': <class 'str'>, 'return': <class 'str'>, 'eggs': <class 'str'>}
Arguments: spam eggs
'spam and eggs'
```

### 4.8 Intermezzo: Coding Style

Every Python developer should read PEP8 at some point;  
here are the most important points extracted from PEP8:

- 4-space indentation, no tabs
- wrap lines, do not exceed 79 chars
- use blank lines to separate funcs, classes and blocks inside funcs
- when possible, put comments on a line of their own
- use docstrings
- use spaces around ops and commas, but not brackets
- `UpperCamelCase` for classes, `lowercase_with_underscores` for funcs, always use `self` as first method arg

Chapter 5 Data Structures
--------------------------------------------------------------------------------

### 5.1 More on Lists

All list methods:
- `append(x)` == `a[len(a):] = [x]`
- `extend(iterable)`: append all items from iterable, == `a[len(a):] = iterable`
- `insert(i, x)`
- `remove(x)`: remove the first item with value x
- `pop([i])`: remove item at i, and return it; if no i, remove tail
- `clear()` == `del a[:]`
- `index(x[, start[, end]])`: return index of first value x
- `count(x)`
- `sort(key=None, reverse=False)`
- `reverse()`: reverse in place
- `copy()` == `a[:]`

int can not be compared to str, None can not be compared to other types

#### 5.1.2 Queue

Lists are not efficient to be queues;  
use `colloections.deque`:
- `append()`
- `popleft()`

#### 5.1.3 List Comprehensions

```py
lst = [(x, y) for x in [1, 2, 3] for y in [3, 1, 4] if x != y]

# is equivalent to:

lst = []
for x in [1, 2, 3]:
    for y in [4, 5, 6]:
        if x != y:
            lst.append((x, y))
```

#### 5.1.4 Nested List Comprehensions

```py
matrix = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
]

# transpose rows and columns:

[[row[i] for row in matrix] for i in range(4)]

# get [[1, 5, 9], [2, 6, 10], [3, 7, 11], [4, 8, 12]]

# is equivalent to:

transposed = []
for i in range(4):
    transposed.append([row[i] for row in matrix])

# and is the same as:

transposed = []
for i in range(4):
    transposed_row = []
    for row in matrix:
        transposed_row.append(row[i])
        transposed.append(transposed_row)
```

### 5.2 The del Statement

- delete slices: `del a[0:7]`
- delete entire variable: `del a`

### 5.3 Tuples and Sequences

Tuples are immutable, but it is possible to create tuples containing mutable objects.

Tuples usually contain a heterogeneous sequence of elems that are accessed via unpacking or indexing

- create tuple of size 1: `t = "hello",`
- unpacking: `x, y, z = t`

### 5.4 Sets

- create: `{1, 2,...}`
- empty set creating: `set()`
- math ops:
  - union: `a | b`
  - intersection: `a & b`
  - diff: `a - b`
  - `a ^ b` (in a or b but not both)
- set comprehension: `a = {x for x in "abractaw" if x not in "abc"}`

### 5.5 Dictionaries

- only immutable can be keys
- empty dict: `d = {}`
- creating: `d = {"apple": 1, "banana": 2}`
- add: `d["peach"] = 3`
- `list(d)`: a list of keys in insertion order
- `sorted(d)`: a list of keys in sorted order
- constructor: `dict([("a", 1), ("b", 2)])`
- dict comprehension: `{x: x**2 for x in (2, 4)}` 
- when keys are simple strings: `dict(a=1, b=2)`

### 5.6 Looping Techiques

- retrieve index/key and value at the same time:
  - `enumerate(lst)` for lists
  - `dict.items()` for dicts
- loop over 2+ seqs at the same time:
  - `zip(lst1, lst2)`
- loop seq in reverse:
  - `reversed(lst)`
- loop seq in sorted order:
  - `sorted(lst)`
- sometimes need to change a list while loop; but it is simpler and safer to create a new

### 5.7 More on Conditions

Used in conditions:
- `in` `not in`
- `is` `is not` (check identity)
- chained comparison `a < b == c`

Note that in Python, unlike C, assignment inside expressions must be done explicitly with the walrus operator :=.
This avoids a common class of problems encountered in C programs: typing = in an expression when == was intended.

Chapter 6 Modules
--------------------------------------------------------------------------------

A module is a file containing Python definitions and statements;  
the file name is the module name (available in `__name__`)

### 6.1 More on Modules

Variants of `import`:
- `from module import function, function2`
- `from module import *`: imports all except begining with `_`
- `import module as mod`
- `from module import function as fun`

If modules changed, interpreter shouldbe restarted;  
or use `import importlib; importlib.reload(modulename)`

#### 6.1.1 Executing modules as scripts

When run module with  
`python module.py <arguments>`  
the code will be executed with `__name__` set to `__main__`.

Therefore, to make file a script as well as module, add to end:
```py
if __name__ == "__main__":
    import sys
    function(int(sys.argv[1]))
```

This is often used either to provide a convenient user interface to a module, or for testing purposes (running the module as a script executed a test suite)

### 6.3 The `dir()` Function

`dir(module)` lists names that a module defines, including variables, functions, modules, etc.

Without args, dir() lists names currently defined.

### 6.4 Packages

Packages are colloctions of subpackages and submodules:
```
pack/
    __init__.py
    subpack1/
        __init__.py
        submod1.py
        submod2.py
        ...
    subpack2/
        __init__.py
        submod3.py
        ...
```

The `__init__.py` files are required to make Python treat directories containing the files as packages.

Using of packages:
```py
import pack.subpack1.submod1
# the last item can be a mod/pack, but not a class/func/var
# must be referenced with full name
pack.subpack1.submod1.func1(arg)

from pack.subpack1 import submod1
submod1.func1(arg)

from pack.subpack1.submod import func1
func1(arg)
```

#### 6.4.1 Importing * From a Package

`import *` imports what defined in `__all__` in `__init__.py`;  
so the use of `*` is controled by package author.

If `__all__` is not defined, only imports `pack.submod`

#### 6.4.2 Intra-package Reference

Refer to submods of siblings packages with relative imports:
```py
# in module submod1.py
from . import submod2
from .. import subpack2
from ..subpack2 import submod3
```

Chapter 7 Input and Output
--------------------------------------------------------------------------------

### 7.1 Fancier Output Formatting

#### 7.1.1 Formatted String Literals

- also called f-strings for short
- can include expression values inside a string
- prefix with `f` or `F`, write expressions as `{expr}`
- optional format specifier control the format:
  - `f"{math.pi:.3f}"`
  - integer after `:` for padding
  - convert the value before formatted:
    - `!a` applies ascii() (`f"{val!a}"`)
    - `!s` applies str()
    - `!r` applies repr()

for ref on format specifications, see ref guide for formatspec

#### 7.1.2 The String format() Method

- `"{}, {}".format("hello", "world")`
- `"{1}, {0} from {lang}".format("world", "hello", lang="Python")"`
- use a dict as arg of format(), ref using `{0[key]}`
- use `**dict` as arg, use `{key}`

#### 7.1.3 Manual String Formatting

- `str.rjust`: right-justifies a string by padding it with space on the left
- `str.ljust()`
- `str.center()`
- `str.zfill()`: pads a numeric string on the left with zeros

#### 7.1.4 Old string formatting

`"pi is %5.3f." % math.pi`

### 7.2 Reading and Writing File

- `open(filename, mode)` returns a *file object*
- `mode`:
  - `r`: read only (default)
  - `w`: write only
  - `a`: append
  - `r+`: read and write
- `f.close()` to free up resources
- it is good practice to use `with`:
  - `with open("file") as f:`
  - f will be automatically closed

#### 7.1.2 Methods of File Objects

- `f.read(size)`: reads at most size chars (text) or bytes (binary) and return as a string or bytes object
- `f.readline()`: read a single line, `\n` is left
- `for line in f:`: loop over to read lines; memory efficient, fast and leads to simple code
- `list(f)`/`f.readlines()`: read all lines in a list
- `f.write(str)`: return number of chars written
- other types need to be converted to a string or a bytes object before written
- `f.tell()`: return an int giving current position
- `f.seek(offset, whence)`: change the position by adding `offset` to a ref point decided by `whence`:
  - 0: from beginning
  - 1: from current pos
  - 2: from end

#### 7.2.2 Saving Structured Data with json

The standard module `json` can take Python data hierarchies and convert them to string, this process is called serializing;  
reconstructing data called deserializing.

- `json.dumps(struct)`
- `json.dump(struct, f)` (f is a file obj)
- `x = json.load(f)`

Chapter 8 Errors and Exceptions
--------------------------------------------------------------------------------

### 8.3 Handling Exceptions

```py
try:
    ...
except ValueError:
    ...
```

### 8.4 Raising Exceptions

`raise NameError("Hello")`

### 8.6 Defining Clean-up Actions

```py
try:
    ...
finally:
    ...
```

### 8.7 Predefined Clean-up Actions

```py
with open("file") as f:
    for line in f:
        print(line)
```

Chapter 9 Classes
--------------------------------------------------------------------------------

### 9.2 Python Scopes and Namespaces

`global` `nonlocal` declarations.

### 9.3 A First Look at Classes

#### 9.3.1 Class Definition Syntax

```py
class ClassName:
    def __init__(self, arg):
        self.data = arg
    ...
```

#### 9.3.2 Class Object

Class objects support 2 kinds of operations:
1. attribute references (variable, function)
2. instantiation: `x = MyClass(arg)`, arg will be passed to `__init__()`

#### 9.3.3 Instace Objects

The only operation of instance object: attribute references;  
there are 2 kinds of attribute names:
1. data attributes (data member in C++)
2. methods

A method is a function that "belongs to" an object,  
valid method names of an instance depend on its class;  
but the method object is not the same thing as the function object in class.

#### 9.3.4 Method Objects

`instance.func()` == `Class.func(instance)`

#### 9.3.5 Class and Instance Variables

Generally speaking, instance variables are for data unique to each instance  
and class variables are for attributes and methods shared by all instances of the class.

### 9.5 Inheritance

Syntax for a derived class definition:
```py
class DerivedClassName(BaseClassName):
    <statement1>
    ...
```

All methods in Python are effectively `virtual`.

#### 9.5.1 Multiple Inheritance

`class DerivedClass(Base1, Base2, ...)`

the search for attributes inheriited from a parent class is a depth-first, left-to-right, not searching twice in the same class where there is an overlap in the hierarchy;  
for example, search order: `DerivedClass` -> `Base1` -> base classes of `Base1` -> `Base2` -> ...

### 9.6 Private Variables

Convention: a name prefixed with an underscore (`_spam`) should be treated as a non-public part of the API.

To aviod name clashes with subclass, there is a mechanism, called name mangling:  
identifiers with at least 2 leading underscores and at most 1 trailing underscore is textually replaced with `_classname__spam`.

### 9.7 Odds and Ends

For a data type similar to `struct` of C, an empty class definition will do nicely:
```py
class Employee:
    pass

john = Employee()
john.name = "John Doe"
john.dept = "computer lab"
...
```

### 9.8 Iterators

In `for` loop, `for` calls `iter()` on the container object.  
The function returns an iterator object that defines the `__next__()` which accesses elements in the container one at a time.  
When there are no more elements, `__next__()` raises a `StopIteration` exception which tells the for loop to terminate.

`__next__()` can be called using the `next()` built-in function:
```py
>>> s = 'ab'
>>> it = iter(s)
>>> it
<iterator object at 0x00AAAAAA>
>>> next(it)
'a'
>>> next(it)
'b'
>>> next(it)
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
    next(it)
StopIteration
```

Add iterator behavior to classes:  
Define an `__iter__()` method which returns an object with a `__next__()` method;  
if the class defines `__next__()`, then `__iter__()` can just return self:
```py
class Reverse:
    """Iterator for looping over a sequence backwards."""
    def __init__(self, data):
        self.data = data
        self.index = len(data)

    def __iter__(self):
        return self

    def __next__(self):
        if self.index == 0:
            raise StopIteration
        self.index = self.index - 1
        return self.data[self.index]

# -----------------------------------------------------------

>>> rev = Reverse('spam')
>>> iter(rev)
<__main__.Reverse object at 0x00A1DB50>
>>> for char in rev:
... print(char)
...
m
a
p
s
```

### 9.9 Generators

Generators are written like regular funcs but use `yield`;  
the `__iter__()` and `__next__()` are created automatically;  
auto raise `StopIteration`;  
a key feature is that the local vars and execution state are automatically saved between calls.

### 9.10 Generator Expressions

Syntax similar to list comprehensions but with parentheses instead of square brackets.

`sum(i*i for i in range(10))`

`uniqueWords = set(word for line in page for word in line.split())`

Chapter 10 Brief Tour of the Standard Library
--------------------------------------------------------------------------------

### 10.1 Operating System Interface

Use `import os` instead of `from os import *`, as `os.open()` will shadow `open()`

- `os.getcwd()`: get current working directory
- `os.chdir("")`: change directory
- `os.system("")`: run system shell command

For daily file and dir management tasks, the `shutil` mod provides a higher lvl interface:
- `shutil.copyfile("", "")`
- `shutil.move("", "")`

### 10.2 File Wildcards

`glob.glob("*.py")`: make file lists from dir wildcard searches

### 10.3 Command Line Arguments

- `sys.argv`

### 10.4 Error Output Redirection and Program Termination

- `sys.stderr.write("warning")`
- `sys.exit()`

### 10.5 String Pattern Matching

- `re` mod provide regular expression tools
- `re.findall(r"\bf[a-z]*", str)`
- `re.sub(r"\b[a-z]+) \1", r"\1", str)`
- string methods for simple use: `str.replace(w1, w2)`

### 10.6 Mathematics

`math` mod gives access to underlying C lib funcs for floating point math:
- `math.cos()`
- `math.pi`
- `math.log()`

`random`:
- `random.choice(list)`
- `random.sample(range(100), 10)`: sampling without replacement
- `random.random()`: random float
- `random.randrange(int)`: random int from range

`statistics` calculates basic statistical properties:
- `statistics.mean(data)`
- `statistics.median(data)`
- `statistics.variance(data)`

Other mods for numerical computations see scipy.

### 10.7 Internet Access

- `urllib.request` for retrieving data from URLs
- `smtplib` for sending mail

### 10.8 Dates and Times `datetime`

### 10.9 Data Compression

- `zlib`
- `gzip`
- `bz2`
- `lzma`
- `zipfile`
- `tarfile`

### 10.10 Performance Measurement

```py
>>> from timeit import Timer
>>> Timer('t=a; a=b; b=t', 'a=1; b=2').timeit()
0.57535828626024577
>>> Timer('a,b = b,a', 'a=1; b=2').timeit()
0.54962537085770791
```

> In contrast to `timeit`’s fine level of granularity, the `profile` and `pstats` modules provide tools for identifying time critical sections in larger blocks of code.

### 10.11 Quality Control

- `doctest`: validating tests embedded in a program's docstring
- `unittest`

Chapter 11 Brief Tour of the Standard Library -- Part II
--------------------------------------------------------------------------------

This part covers advanced mods for professional programming which rarely occur in small scripts

11.1 Output Formatting
11.2 Templating
11.3 Working with Binary Data Record Layouts
11.4 Multi-threading
11.5 Logging
11.6 Weak References

### 11.7 Tools for Working with Lists

- `array`: stores only homogeneous data more compactly
- `collections.deque()`
- `bisect`: manipulate sorted lists
- `heapq`: heaps based on regular lists

11.8 Decimal Floating Point Arithmetic

--------------------------------------------------------------------------------

EOF
