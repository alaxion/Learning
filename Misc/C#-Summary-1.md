C#-Summary-1.md

C# Summary (1)
================================================================================

Ad147  
<ar><r>

Init: 19Jan01

--------------------------------------------------------------------------------

- [1 C# 程序结构](#1-c-%E7%A8%8B%E5%BA%8F%E7%BB%93%E6%9E%84)
- [2 C# 基本语法](#2-c-%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95)
    - [using 关键字](#using-%E5%85%B3%E9%94%AE%E5%AD%97)
    - [class 关键字](#class-%E5%85%B3%E9%94%AE%E5%AD%97)
    - [C# 中的注释](#c-%E4%B8%AD%E7%9A%84%E6%B3%A8%E9%87%8A)
    - [成员变量](#%E6%88%90%E5%91%98%E5%8F%98%E9%87%8F)
    - [成员函数](#%E6%88%90%E5%91%98%E5%87%BD%E6%95%B0)
    - [实例化一个类](#%E5%AE%9E%E4%BE%8B%E5%8C%96%E4%B8%80%E4%B8%AA%E7%B1%BB)
    - [标识符](#%E6%A0%87%E8%AF%86%E7%AC%A6)
    - [C# 关键字](#c-%E5%85%B3%E9%94%AE%E5%AD%97)
- [3 C# 数据类型](#3-c-%E6%95%B0%E6%8D%AE%E7%B1%BB%E5%9E%8B)
    - [值类型（Value types）](#%E5%80%BC%E7%B1%BB%E5%9E%8Bvalue-types)
    - [引用类型（Reference types）](#%E5%BC%95%E7%94%A8%E7%B1%BB%E5%9E%8Breference-types)
        - [对象（Object）类型](#%E5%AF%B9%E8%B1%A1object%E7%B1%BB%E5%9E%8B)
        - [动态（Dynamic）类型](#%E5%8A%A8%E6%80%81dynamic%E7%B1%BB%E5%9E%8B)
        - [字符串（String）类型](#%E5%AD%97%E7%AC%A6%E4%B8%B2string%E7%B1%BB%E5%9E%8B)
    - [指针类型（Pointer types）](#%E6%8C%87%E9%92%88%E7%B1%BB%E5%9E%8Bpointer-types)
- [4 C# 类型转换](#4-c-%E7%B1%BB%E5%9E%8B%E8%BD%AC%E6%8D%A2)
    - [C# 类型转换方法](#c-%E7%B1%BB%E5%9E%8B%E8%BD%AC%E6%8D%A2%E6%96%B9%E6%B3%95)
- [5 C# 变量](#5-c-%E5%8F%98%E9%87%8F)
    - [C# 中的变量定义](#c-%E4%B8%AD%E7%9A%84%E5%8F%98%E9%87%8F%E5%AE%9A%E4%B9%89)
    - [C# 中的变量初始化](#c-%E4%B8%AD%E7%9A%84%E5%8F%98%E9%87%8F%E5%88%9D%E5%A7%8B%E5%8C%96)
    - [接受来自用户的值](#%E6%8E%A5%E5%8F%97%E6%9D%A5%E8%87%AA%E7%94%A8%E6%88%B7%E7%9A%84%E5%80%BC)
    - [C# 中的 Lvalues 和 Rvalues](#c-%E4%B8%AD%E7%9A%84-lvalues-%E5%92%8C-rvalues)
- [6 C# 常量](#6-c-%E5%B8%B8%E9%87%8F)
    - [整数常量](#%E6%95%B4%E6%95%B0%E5%B8%B8%E9%87%8F)
    - [浮点常量](#%E6%B5%AE%E7%82%B9%E5%B8%B8%E9%87%8F)
    - [字符常量](#%E5%AD%97%E7%AC%A6%E5%B8%B8%E9%87%8F)
    - [字符串常量](#%E5%AD%97%E7%AC%A6%E4%B8%B2%E5%B8%B8%E9%87%8F)
    - [定义常量](#%E5%AE%9A%E4%B9%89%E5%B8%B8%E9%87%8F)
- [7 C# 运算符](#7-c-%E8%BF%90%E7%AE%97%E7%AC%A6)
    - [算术运算符](#%E7%AE%97%E6%9C%AF%E8%BF%90%E7%AE%97%E7%AC%A6)
    - [关系运算符](#%E5%85%B3%E7%B3%BB%E8%BF%90%E7%AE%97%E7%AC%A6)
    - [逻辑运算符](#%E9%80%BB%E8%BE%91%E8%BF%90%E7%AE%97%E7%AC%A6)
    - [位运算符](#%E4%BD%8D%E8%BF%90%E7%AE%97%E7%AC%A6)
    - [赋值运算符](#%E8%B5%8B%E5%80%BC%E8%BF%90%E7%AE%97%E7%AC%A6)
    - [其他运算符](#%E5%85%B6%E4%BB%96%E8%BF%90%E7%AE%97%E7%AC%A6)
    - [C# 中的运算符优先级](#c-%E4%B8%AD%E7%9A%84%E8%BF%90%E7%AE%97%E7%AC%A6%E4%BC%98%E5%85%88%E7%BA%A7)
- [8 C# 判断](#8-c-%E5%88%A4%E6%96%AD)
    - [判断语句](#%E5%88%A4%E6%96%AD%E8%AF%AD%E5%8F%A5)
    - [? : 运算符](#%E8%BF%90%E7%AE%97%E7%AC%A6)
    - [C# switch 语句](#c-switch-%E8%AF%AD%E5%8F%A5)
- [9 C# 循环](#9-c-%E5%BE%AA%E7%8E%AF)
    - [循环类型](#%E5%BE%AA%E7%8E%AF%E7%B1%BB%E5%9E%8B)
    - [`foreach`](#foreach)
    - [循环控制语句](#%E5%BE%AA%E7%8E%AF%E6%8E%A7%E5%88%B6%E8%AF%AD%E5%8F%A5)
    - [无限循环](#%E6%97%A0%E9%99%90%E5%BE%AA%E7%8E%AF)
- [10 C# 封装](#10-c-%E5%B0%81%E8%A3%85)
    - [Public 访问修饰符](#public-%E8%AE%BF%E9%97%AE%E4%BF%AE%E9%A5%B0%E7%AC%A6)
    - [Private 访问修饰符](#private-%E8%AE%BF%E9%97%AE%E4%BF%AE%E9%A5%B0%E7%AC%A6)
    - [Protected 访问修饰符](#protected-%E8%AE%BF%E9%97%AE%E4%BF%AE%E9%A5%B0%E7%AC%A6)
    - [Internal 访问修饰符](#internal-%E8%AE%BF%E9%97%AE%E4%BF%AE%E9%A5%B0%E7%AC%A6)
    - [Protected Internal 访问修饰符](#protected-internal-%E8%AE%BF%E9%97%AE%E4%BF%AE%E9%A5%B0%E7%AC%A6)
- [11 C# 方法](#11-c-%E6%96%B9%E6%B3%95)
    - [C# 中定义方法](#c-%E4%B8%AD%E5%AE%9A%E4%B9%89%E6%96%B9%E6%B3%95)
    - [递归方法调用](#%E9%80%92%E5%BD%92%E6%96%B9%E6%B3%95%E8%B0%83%E7%94%A8)
    - [参数传递](#%E5%8F%82%E6%95%B0%E4%BC%A0%E9%80%92)
    - [按值传递参数](#%E6%8C%89%E5%80%BC%E4%BC%A0%E9%80%92%E5%8F%82%E6%95%B0)
    - [按引用传递参数](#%E6%8C%89%E5%BC%95%E7%94%A8%E4%BC%A0%E9%80%92%E5%8F%82%E6%95%B0)
    - [按输出传递参数](#%E6%8C%89%E8%BE%93%E5%87%BA%E4%BC%A0%E9%80%92%E5%8F%82%E6%95%B0)

1 C# 程序结构
--------------------------------------------------------------------------------

一个 C# 程序主要包括以下部分：

- 命名空间声明（Namespace declaration）
- 一个 class
- Class 方法
- Class 属性
- 一个 Main 方法
- 语句（Statements）& 表达式（Expressions）
- 注释

```cs
// 让我们看一个可以打印出 "Hello World" 的简单的代码：
using System;
namespace HelloWorldApplication
{
   class HelloWorld
   {
      static void Main(string[] args)
      {
         /* 我的第一个 C# 程序*/
         Console.WriteLine("Hello World");
         Console.ReadKey();
      }
   }
}
```

2 C# 基本语法
--------------------------------------------------------------------------------

以 Rectangle（矩形）对象为例。它具有 length 和 width 属性。根据设计，它可能需要接受这些属性值、计算面积和显示细节。

让我们来看看一个 Rectangle（矩形）类的实现，并借此讨论 C# 的基本语法：

```cs
using System;
namespace RectangleApplication
{
    class Rectangle
    {
        // 成员变量
        double length;
        double width;
        public void Acceptdetails()
        {
            length = 4.5;    
            width = 3.5;
        }
        public double GetArea()
        {
            return length * width;
        }
        public void Display()
        {
            Console.WriteLine("Length: {0}", length);
            Console.WriteLine("Width: {0}", width);
            Console.WriteLine("Area: {0}", GetArea());
        }
    }
    
    class ExecuteRectangle
    {
        static void Main(string[] args)
        {
            Rectangle r = new Rectangle();
            r.Acceptdetails();
            r.Display();
            Console.ReadLine();
        }
    }
}
```

```shell
Length: 4.5
Width: 3.5
Area: 15.75
```

### using 关键字

在任何 C# 程序中的第一条语句都是：  
`using System;`

using 关键字用于在程序中包含命名空间。一个程序可以包含多个 using 语句。

### class 关键字

class 关键字用于声明一个类。

### C# 中的注释

注释是用于解释代码。编译器会忽略注释的条目。在 C# 程序中，多行注释以 `/*` 开始，并以字符 `*/` 终止，如下所示：

单行注释是用 '//' 符号表示。

### 成员变量

变量是类的属性或数据成员，用于存储数据。在上面的程序中，Rectangle 类有两个成员变量，名为 length 和 width。

### 成员函数

函数是一系列执行指定任务的语句。类的成员函数是在类内声明的。我们举例的类 Rectangle 包含了三个成员函数： AcceptDetails、GetArea 和 Display。

### 实例化一个类

在上面的程序中，类 ExecuteRectangle 是一个包含 Main() 方法和实例化 Rectangle 类的类。

### 标识符

- 标识符必须以字母、下划线或 `@` 开头，后面可以跟一系列的字母、数字（ 0 - 9 ）、下划线（ _ ）、@。
- 标识符中的第一个字符不能是数字。
- 标识符必须不包含任何嵌入的空格或符号，比如 ? - +! # % ^ & * ( ) [ ] { } . ; : " ' / \。
- 标识符不能是 C# 关键字。除非它们有一个 @ 前缀。 例如，@if 是有效的标识符，但 if 不是，因为 if 是关键字。
- 标识符必须区分大小写。大写字母和小写字母被认为是不同的字母。
- 不能与C#的类库名称相同。

### C# 关键字

关键字是 C# 编译器预定义的保留字。这些关键字不能用作标识符，但是，如果您想使用这些关键字作为标识符，可以在关键字前面加上 @ 字符作为前缀。

在 C# 中，有些关键字在代码的上下文中有特殊的意义，如 get 和 set，这些被称为上下文关键字（contextual keywords）。

###### C# 中的保留关键字（Reserved Keywords）

|           |           |          |            |                        |                       |         |
| --------- | --------- | -------- | ---------- | ---------------------- | --------------------- | ------- |
| abstract  | as        | base     | bool       | break                  | byte                  | case    |
| catch     | char      | checked  | class      | const                  | continue              | decimal |
| default   | delegate  | do       | double     | else                   | enum                  | event   |
| explicit  | extern    | false    | finally    | fixed                  | float                 | for     |
| foreach   | goto      | if       | implicit   | in                     | in (generic modifier) | int     |
| interface | internal  | is       | lock       | long                   | namespace             | new     |
| null      | object    | operator | out        | out (generic modifier) | override              | params  |
| private   | protected | public   | readonly   | ref                    | return                | sbyte   |
| sealed    | short     | sizeof   | stackalloc | static                 | string                | struct  |
| switch    | this      | throw    | true       | try                    | typeof                | uint    |
| ulong     | unchecked | unsafe   | ushort     | using                  | virtual               | void    |
| volatile  | while     |

###### C# 中的上下文关键字（Contextual Keywords）

|                  |        |           |            |         |         |                |
| ---------------- | ------ | --------- | ---------- | ------- | ------- | -------------- |
| add              | alias  | ascending | descending | dynamic | from    | get            |
| global           | group  | into      | join       | let     | orderby | partial (type) |
| partial (method) | remove | select    | set        |

3 C# 数据类型
--------------------------------------------------------------------------------

- 值类型（Value types）
- 引用类型（Reference types）
- 指针类型（Pointer types）

### 值类型（Value types）

值类型变量可以直接分配给一个值。它们是从类 System.ValueType 中派生的。

值类型直接包含数据。比如 int、char、float，它们分别存储数字、字符、浮点数。当您声明一个 int 类型时，系统分配内存来存储值。

###### C# 2010 中可用的值类型：

| 类型    | 描述                                 | 范围                                                  | 默认值      |
| ------- | ------------------------------------ | ----------------------------------------------------- | ----------- |
| bool    | 布尔值                               | True 或 False                                         | False       |
| byte    | 8 位无符号整数                       | 0 到 255                                              | 0           |
| char    | 16 位 Unicode 字符                   | U +0000 到 U +ffff                                    | '\0'        |
| decimal | 128 位精确的十进制值，28-29 有效位数 | (-7.9 x 1028 到 7.9 x 1028) / 100 到 28               | 0.0M        |
| double  | 64 位双精度浮点型                    | (+/-)5.0 x 10-324 到 (+/-)1.7 x 10308                 | 0.0D        |
| float   | 32 位单精度浮点型                    | -3.4 x 1038 到 + 3.4 x 1038                           | 0.0F        |
| int     | 32 位有符号整数类型                  | -2,147,483,648 到 2,147,483,647                       | 0           |
| long    | 64 位有符号整数类型                  | -923,372,036,854,775,808 到 9,223,372,036,854,775,807 | 0L          |
| sbyte   | 8                                    | 位有符号整数类型                                      | -128 到 127 | 0 |
| short   | 16 位有符号整数类型                  | -32,768 到 32,767                                     | 0           |
| uint    | 32 位无符号整数类型                  | 0 到 4,294,967,295                                    | 0           |
| ulong   | 64 位无符号整数类型                  | 0 到 18,446,744,073,709,551,615                       | 0           |
| ushort  | 16 位无符号整数类型                  | 0 到 65,535                                           | 0           |

如需得到一个类型或一个变量在特定平台上的准确尺寸，可以使用 **sizeof** 方法。表达式 *sizeof(type)* 产生以字节为单位存储对象或类型的存储尺寸。下面举例获取任何机器上 int 类型的存储尺寸：

### 引用类型（Reference types）

引用类型不包含存储在变量中的实际数据，但它们包含对变量的引用。

换句话说，它们指的是一个内存位置。使用多个变量时，引用类型可以指向一个内存位置。如果内存位置的数据是由一个变量改变的，其他变量会自动反映这种值的变化。内置的 引用类型有：object、dynamic 和 string。

#### 对象（Object）类型

对象（**Object**）类型 是 C# 通用类型系统（Common Type System - CTS）中所有数据类型的终极基类。Object 是 System.Object 类的别名。所以对象（Object）类型可以被分配任何其他类型（值类型、引用类型、预定义类型或用户自定义类型）的值。但是，在分配值之前，需要先进行类型转换。

当一个值类型转换为对象类型时，则被称为 **装箱**；另一方面，当一个对象类型转换为值类型时，则被称为 **拆箱**。

#### 动态（Dynamic）类型

您可以存储任何类型的值在动态数据类型变量中。这些变量的类型检查是在运行时发生的。

声明动态类型的语法：

`dynamic d = 20;`

动态类型与对象类型相似，但是对象类型变量的类型检查是在编译时发生的，而动态类型变量的类型检查是在运行时发生的。

#### 字符串（String）类型

字符串（**String**）类型 允许您给变量分配任何字符串值。字符串（String）类型是 System.String 类的别名。它是从对象（Object）类型派生的。字符串（String）类型的值可以通过两种形式进行分配：引号和 @引号。

C# string 字符串的前面可以加 @（称作"逐字字符串"）将转义字符（\）当作普通字符对待，比如：

`string str = @"C:\Windows";` 等价于：

`string str = "C:\\Windows";`

@ 字符串中可以任意换行，换行符及缩进空格都计算在字符串长度之内。

用户自定义引用类型有：class、interface 或 delegate。我们将在以后的章节中讨论这些类型。

### 指针类型（Pointer types）

指针类型变量存储另一种类型的内存地址。C# 中的指针与 C 或 C++ 中的指针有相同的功能。

声明指针类型的语法：

`type* identifier;`

我们将在章节"不安全的代码"中讨论指针类型。

4 C# 类型转换
--------------------------------------------------------------------------------

类型转换从根本上说是类型铸造，或者说是把数据从一种类型转换为另一种类型。在 C# 中，类型铸造有两种形式：

- 隐式类型转换 - 这些转换是 C# 默认的以安全方式进行的转换, 不会导致数据丢失。例如，从小的整数类型转换为大的整数类型，从派生类转换为基类。
- 显式类型转换 - 显式类型转换，即强制类型转换。显式转换需要强制转换运算符，而且强制转换会造成数据丢失。

显式的类型转换：`i = (int)d;`

### C# 类型转换方法

###### C# 提供内置的类型转换方法

| 序号 | 方法       | 描述                                              |
| ---- | ---------- | ------------------------------------------------- |
| 1    | ToBoolean  | 如果可能的话，把类型转换为布尔型。                |
| 2    | ToByte     | 把类型转换为字节类型。                            |
| 3    | ToChar     | 如果可能的话，把类型转换为单个 Unicode 字符类型。 |
| 4    | ToDateTime | 把类型（整数或字符串类型）转换为 日期-时间 结构。 |
| 5    | ToDecimal  | 把浮点型或整数类型转换为十进制类型。              |
| 6    | ToDouble   | 把类型转换为双精度浮点型。                        |
| 7    | ToInt16    | 把类型转换为 16 位整数类型。                      |
| 8    | ToInt32    | 把类型转换为 32 位整数类型。                      |
| 9    | ToInt64    | 把类型转换为 64 位整数类型。                      |
| 10   | ToSbyte    | 把类型转换为有符号字节类型。                      |
| 11   | ToSingle   | 把类型转换为小浮点数类型。                        |
| 12   | ToString   | 把类型转换为字符串类型。                          |
| 13   | ToType     | 把类型转换为指定类型。                            |
| 14   | ToUInt16   | 把类型转换为 16 位无符号整数类型。                |
| 15   | ToUInt32   | 把类型转换为 32 位无符号整数类型。                |
| 16   | ToUInt64   | 把类型转换为 64 位无符号整数类型。                |

5 C# 变量
--------------------------------------------------------------------------------

一个变量只不过是一个供程序操作的存储区的名字。在 C# 中，每个变量都有一个特定的类型，类型决定了变量的内存大小和布局。范围内的值可以存储在内存中，可以对变量进行一系列操作。

C# 中提供的基本的值类型大致可以分为以下几类：

| 类型       | 举例                                                       |
| ---------- | ---------------------------------------------------------- |
| 整数类型   | sbyte、byte、short、ushort、int、uint、long、ulong 和 char |
| 浮点型     | float 和 double                                            |
| 十进制类型 | decimal                                                    |
| 布尔类型   | true 或 false 值，指定的值                                 |
| 空类型     | 可为空值的数据类型                                         |

C# 允许定义其他值类型的变量，比如 enum，也允许定义引用类型变量，比如 class。这些我们将在以后的章节中进行讨论。在本章节中，我们只研究基本变量类型。

### C# 中的变量定义

`<data_type> <variable_list>;`

### C# 中的变量初始化

`<data_type> <variable_name> = value;`

### 接受来自用户的值

System 命名空间中的 Console 类提供了一个函数 `ReadLine()`，用于接收来自用户的输入，并把它存储到一个变量中。

```cs
int num;
num = Convert.ToInt32(Console.ReadLine());
// Console.ReadLine() 只接受字符串格式的数据。
```

### C# 中的 Lvalues 和 Rvalues

1. lvalue 表达式可以出现在赋值语句的左边或右边。
2. rvalue 表达式可以出现在赋值语句的右边，不能出现在赋值语句的左边。

6 C# 常量
---------------------------------------------

常量是固定值，程序执行期间不会改变。常量可以是任何基本数据类型，比如整数常量、浮点常量、字符常量或者字符串常量，还有枚举常量。

常量可以被当作常规的变量，只是它们的值在定义后不能被修改。

### 整数常量

整数常量可以是十进制、八进制或十六进制的常量。前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，没有前缀则表示十进制。

整数常量也可以有后缀，可以是 U 和 L 的组合，其中，U 和 L 分别表示 unsigned 和 long。后缀可以是大写或者小写，多个后缀以任意顺序进行组合。

### 浮点常量

一个浮点常量是由整数部分、小数点、小数部分和指数部分组成。您可以使用小数形式或者指数形式来表示浮点常量。

使用小数形式表示时，必须包含小数点、指数或同时包含两者。使用指数形式表示时，必须包含整数部分、小数部分或同时包含两者。有符号的指数是用 e 或 E 表示的。

### 字符常量

字符常量是括在单引号里，例如，'x'，且可存储在一个简单的字符类型变量中。一个字符常量可以是一个普通字符（例如 'x'）、一个转义序列（例如 '\t'）或者一个通用字符（例如 '\u02C0'）。

###### 转义序列

| 转义序列    | 含义                       |
| ----------- | -------------------------- |
| \\\         | \ 字符                     |
| \\'         | ' 字符                     |
| \\"         | " 字符                     |
| \\?         | ? 字符                     |
| \\a         | Alert 或 bell              |
| \\b         | 退格键（Backspace）        |
| \\f         | 换页符（Form feed）        |
| \\n         | 换行符（Newline）          |
| \\r         | 回车                       |
| \\t         | 水平制表符 tab             |
| \\v         | 垂直制表符 tab             |
| \\ooo       | 一到三位的八进制数         |
| \\xhh . . . | 一个或多个数字的十六进制数 |

### 字符串常量

字符串常量是括在双引号 `""` 里，或者是括在 `@""` 里。字符串常量包含的字符与字符常量相似，可以是：普通字符、转义序列和通用字符。

### 定义常量

常量是使用 const 关键字来定义的 。定义一个常量的语法如下：

`const <data_type> <constant_name> = value;`

7 C# 运算符
--------------------------------------------------------------------------------

运算符是一种告诉编译器执行特定的数学或逻辑操作的符号。C# 有丰富的内置运算符，分类如下：

- 算术运算符
- 关系运算符
- 逻辑运算符
- 位运算符
- 赋值运算符
- 其他运算符

### 算术运算符

下表显示了 C# 支持的所有算术运算符。假设变量 A 的值为 10，变量 B 的值为 20，则：

| 运算符 | 描述                             | 实例             |
| ------ | -------------------------------- | ---------------- |
| +      | 把两个操作数相加                 | A + B 将得到 30  |
| -      | 从第一个操作数中减去第二个操作数 | A - B 将得到 -10 |
| *      | 把两个操作数相乘                 | A * B 将得到 200 |
| /      | 分子除以分母                     | B / A 将得到 2   |
| %      | 取模运算符，整除后的余数         | B % A 将得到 0   |
| ++     | 自增运算符，整数值增加 1         | A++ 将得到 11    |
| --     | 自减运算符，整数值减少           | 1	A-- 将得到 9   |

### 关系运算符

###### C# 支持的所有关系运算符。

假设变量 A 的值为 10，变量 B 的值为 20，则：

| 运算符 | 描述                                                           | 实例              |
| ------ | -------------------------------------------------------------- | ----------------- |
| ==     | 检查两个操作数的值是否相等，如果相等则条件为真。               | (A == B) 不为真。 |
| !=     | 检查两个操作数的值是否相等，如果不相等则条件为真。             | (A != B) 为真。   |
| >      | 检查左操作数的值是否大于右操作数的值，如果是则条件为真。       | (A > B) 不为真。  |
| <      | 检查左操作数的值是否小于右操作数的值，如果是则条件为真。       | (A < B) 为真。    |
| >=     | 检查左操作数的值是否大于或等于右操作数的值，如果是则条件为真。 | (A >= B) 不为真。 |
| <=     | 检查左操作数的值是否小于或等于右操作数的值，如果是则条件为真。 | (A <= B) 为真。   |

### 逻辑运算符

###### C# 支持的所有逻辑运算符。

假设变量 A 为布尔值 true，变量 B 为布尔值 false，则：

| 运算符 | 描述                                                                               | 实例             |
| ------ | ---------------------------------------------------------------------------------- | ---------------- |
| &&     | 称为逻辑与运算符。如果两个操作数都非零，则条件为真。                               | (A && B) 为假。  |
| \|\|   | 称为逻辑或运算符。如果两个操作数中有任意一个非零，则条件为真。                     | (A               | B) 为真。 |
| !      | 称为逻辑非运算符。用来逆转操作数的逻辑状态。如果条件为真则逻辑非运算符将使其为假。 | !(A && B) 为真。 |

### 位运算符

###### C# 支持的位运算符。

假设变量 A 的值为 60 (0011 1100)，变量 B 的值为 13 (0000 1101)，则：

| 运算符 | 描述                                                                                     | 实例                                                             |
| ------ | ---------------------------------------------------------------------------------------- | ---------------------------------------------------------------- |
| &      | 如果同时存在于两个操作数中，二进制 AND 运算符复制一位到结果中。                          | (A & B) 将得到 12，即为 0000 1100                                |
| \|     | 如果存在于任一操作数中，二进制 OR 运算符复制一位到结果中。                               | (A                                                               | B) 将得到 61，即为 0011 1101 |
| ^      | 如果存在于其中一个操作数中但不同时存在于两个操作数中，二进制异或运算符复制一位到结果中。 | (A ^ B) 将得到 49，即为 0011 0001                                |
| ~      | 按位取反运算符是一元运算符，具有"翻转"位效果，即0变成1，1变成0，包括符号位。             | (~A ) 将得到 -61，即为 1100 0011，一个有符号二进制数的补码形式。 |
| <<     | 二进制左移运算符。左操作数的值向左移动右操作数指定的位数。                               | A << 2 将得到 240，即为 1111 0000                                |
| >>     | 二进制右移运算符。左操作数的值向右移动右操作数指定的位数。                               | A >> 2 将得到 15，即为 0000 1111                                 |

### 赋值运算符

###### C# 支持的赋值运算符

| 运算符 | 描述                                                             | 实例                            |
| ------ | ---------------------------------------------------------------- | ------------------------------- |
| =      | 简单的赋值运算符，把右边操作数的值赋给左边操作数                 | C = A + B 将把 A + B 的值赋给 C |
| +=     | 加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数 | C += A 相当于 C = C + A         |
| -=     | 减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数 | C -= A 相当于 C = C - A         |
| *=     | 乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数 | C *= A 相当于 C = C * A         |
| /=     | 除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数 | C /= A 相当于 C = C / A         |
| %=     | 求模且赋值运算符，求两个操作数的模赋值给左边操作数               | C %= A 相当于 C = C % A         |
| <<=    | 左移且赋值运算符                                                 | C <<= 2 等同于 C = C << 2       |
| >>=    | 右移且赋值运算符                                                 | C >>= 2 等同于 C = C >> 2       |
| &=     | 按位与且赋值运算符                                               | C &= 2 等同于 C = C & 2         |
| ^=     | 按位异或且赋值运算符                                             | C ^= 2 等同于 C = C ^ 2         |
| \|=    | 按位或且赋值运算符                                               | C                               | = 2 等同于 C = C | 2 |

### 其他运算符

###### C# 支持的其他一些重要的运算符

| 运算符   | 描述                                   | 实例                                                                                          |
| -------- | -------------------------------------- | --------------------------------------------------------------------------------------------- |
| sizeof() | 返回数据类型的大小。                   | sizeof(int)，将返回 4.                                                                        |
| typeof() | 返回 class 的类型。                    | typeof(StreamReader);                                                                         |
| &        | 返回变量的地址。                       | &a; 将得到变量的实际地址。                                                                    |
| *        | 变量的指针。                           | *a; 将指向一个变量。                                                                          |
| ? :      | 条件表达式                             | 如果条件为真 ? 则为 X : 否则为 Y                                                              |
| is       | 判断对象是否为某一类型。               | If( Ford is Car) // 检查 Ford 是否是 Car 类的一个对象。                                       |
| as       | 强制转换，即使转换失败也不会抛出异常。 | Object obj = new StringReader("Hello");                 StringReader r = obj as StringReader; |

### C# 中的运算符优先级

| 类别       | 运算符                            | 结合性   |
| ---------- | --------------------------------- | -------- |
| 后缀       | () [] -> . ++ - -                 | 从左到右 |
| 一元       | + - ! ~ ++ - - (type)* & sizeof   | 从右到左 |
| 乘除       | * / %                             | 从左到右 |
| 加减       | + -                               | 从左到右 |
| 移位       | << >>                             | 从左到右 |
| 关系       | < <= > >=                         | 从左到右 |
| 相等       | == !=                             | 从左到右 |
| 位与 AND   | &                                 | 从左到右 |
| 位异或 XOR | ^                                 | 从左到右 |
| 位或 OR    | \|                                | 从左到右 |
| 逻辑与 AND | &&                                | 从左到右 |
| 逻辑或 OR  | \|\|                              | 从左到右 |
| 条件       | ?:                                | 从右到左 |
| 赋值       | = += -= *= /= %=>>= <<= &= ^= \|= | 从右到左 |
| 逗号       | ,                                 | 从左到右 |

8 C# 判断
--------------------------------------------------------------------------------

判断结构要求程序员指定一个或多个要评估或测试的条件，以及条件为真时要执行的语句（必需的）和条件为假时要执行的语句（可选的）。

### 判断语句

###### C# 提供的判断语句

| 语句             | 描述                                                                       |
| ---------------- | -------------------------------------------------------------------------- |
| if 语句          | 一个 if 语句 由一个布尔表达式后跟一个或多个语句组成。                      |
| if...else 语句   | 一个 if 语句 后可跟一个可选的 else 语句，else 语句在布尔表达式为假时执行。 |
| 嵌套 if 语句     | 您可以在一个 if 或 else if 语句内使用另一个 if 或 else if 语句。           |
| switch 语句      | 一个 switch 语句允许测试一个变量等于多个值时的情况。                       |
| 嵌套 switch 语句 | 您可以在一个 switch 语句内使用另一个 switch 语句。                         |

### ? : 运算符

我们已经在前面的章节中讲解了 条件运算符 ? :，可以用来替代 if...else 语句。它的一般形式如下：

`Exp1 ? Exp2 : Exp3;`

### C# switch 语句

C# 中 switch 语句的语法：

```cs
switch(expression)
{
    case constant-expression  :
       statement(s);
       break; 
    case constant-expression  :
       statement(s);
       break; 
  
    /* 您可以有任意数量的 case 语句 */
    default : /* 可选的 */
       statement(s);
       break; 
}
```

switch 语句必须遵循下面的规则：

- switch 语句中的 expression 必须是一个整型或枚举类型，或者是一个 class 类型，其中 class 有一个单一的转换函数将其转换为整型或枚举类型。
- 在一个 switch 中可以有任意数量的 case 语句。每个 case 后跟一个要比较的值和一个冒号。
- case 的 constant-expression 必须与 switch 中的变量具有相同的数据类型，且必须是一个常量。
- 当被测试的变量等于 case 中的常量时，case 后跟的语句将被执行，直到遇到 break 语句为止。
- 当遇到 break 语句时，switch 终止，控制流将跳转到 switch 语句后的下一行。
- 不是每一个 case 都需要包含 break。如果 case 语句为空，则可以不包含 break，控制流将会 继续 后续的 case，直到遇到 break 为止。
- C# 不允许从一个开关部分继续执行到下一个开关部分。如果 case 语句中有处理语句，则必须包含 break 或其他跳转语句。
- 一个 switch 语句可以有一个可选的 default case，出现在 switch 的结尾。default case 可用于在上面所有 case 都不为真时执行一个任务。default case 中的 break 语句不是必需的。
- C# 不支持从一个 case 标签显式贯穿到另一个 case 标签。如果要使 C# 支持从一个 case 标签显式贯穿到另一个 case 标签，可以使用 goto 一个 switch-case 或 goto default。

9 C# 循环
--------------------------------------------------------------------------------

### 循环类型

###### C# 提供的循环类型

| 循环类型         | 描述                                                                 |
| ---------------- | -------------------------------------------------------------------- |
| while 循环       | 当给定条件为真时，重复语句或语句组。它会在执行循环主体之前测试条件。 |
| for/foreach 循环 | 多次执行一个语句序列，简化管理循环变量的代码。                       |
| do...while 循环  | 除了它是在循环主体结尾测试条件外，其他与 while 语句类似。            |
| 嵌套循环         | 您可以在 while、for 或 do..while 循环内使用一个或多个循环。          |

### `foreach`

```cs
int[] fibarray = new int[] { 0, 1, 1, 2, 3, 5, 8, 13 };
foreach (int element in fibarray)
{
    System.Console.WriteLine(element);
}
```

### 循环控制语句

循环控制语句更改执行的正常序列。当执行离开一个范围时，所有在该范围中创建的自动对象都会被销毁。

###### C# 提供的控制语句

| 控制语句      | 描述                                                                           |
| ------------- | ------------------------------------------------------------------------------ |
| break 语句    | 终止 loop 或 switch 语句，程序流将继续执行紧接着 loop 或 switch 的下一条语句。 |
| continue 语句 | 引起循环跳过主体的剩余部分，立即重新开始测试条件。                             |

### 无限循环
如果条件永远不为假，则循环将变成无限循环。for 循环在传统意义上可用于实现无限循环。由于构成循环的三个表达式中任何一个都不是必需的，您可以将某些条件表达式留空来构成一个无限循环。

当条件表达式不存在时，它被假设为真。您也可以设置一个初始值和增量表达式，但是一般情况下，程序员偏向于使用 for(;;) 结构来表示一个无限循环。

10 C# 封装
--------------------------------------------------------------------------------

**封装** 被定义为"把一个或多个项目封闭在一个物理的或者逻辑的包中"。在面向对象程序设计方法论中，封装是为了防止对实现细节的访问。

抽象和封装是面向对象程序设计的相关特性。抽象允许相关信息可视化，封装则使开发者实现所需级别的抽象。

C# 封装根据具体的需要，设置使用者的访问权限，并通过 访问修饰符 来实现。

一个 访问修饰符 定义了一个类成员的范围和可见性。C# 支持的访问修饰符如下所示：

- public：所有对象都可以访问；
- private：对象本身在对象内部可以访问；
- protected：只有该类对象及其子类对象可以访问
- internal：同一个程序集的对象可以访问；
- protected internal：访问限于当前程序集或派生自包含类的类型。

### Public 访问修饰符

Public 访问修饰符允许一个类将其成员变量和成员函数暴露给其他的函数和对象。任何公有成员可以被外部的类访问。

### Private 访问修饰符

Private 访问修饰符允许一个类将其成员变量和成员函数对其他的函数和对象进行隐藏。只有同一个类中的函数可以访问它的私有成员。即使是类的实例也不能访问它的私有成员。

### Protected 访问修饰符

Protected 访问修饰符允许子类访问它的基类的成员变量和成员函数。这样有助于实现继承。我们将在继承的章节详细讨论这个。

### Internal 访问修饰符

Internal 访问说明符允许一个类将其成员变量和成员函数暴露给当前程序中的其他函数和对象。换句话说，带有 internal 访问修饰符的任何成员可以被定义在该成员所定义的应用程序内的任何类或方法访问。

### Protected Internal 访问修饰符

Protected Internal 访问修饰符允许在本类,派生类或者包含该类的程序集中访问。这也被用于实现继承。

11 C# 方法
--------------------------------------------------------------------------------

一个方法是把一些相关的语句组织在一起，用来执行一个任务的语句块。每一个 C# 程序至少有一个带有 Main 方法的类。

### C# 中定义方法

当定义一个方法时，从根本上说是在声明它的结构的元素。在 C# 中，定义方法的语法如下：

```cs
<Access Specifier> <Return Type> <Method Name>(Parameter List)
{
   Method Body
}
```

下面是方法的各个元素：

- Access Specifier：访问修饰符，这个决定了变量或方法对于另一个类的可见性。
- Return type：返回类型，一个方法可以返回一个值。返回类型是方法返回的值的数据类型。如果方法不返回任何值，则返回类型为 void。
- Method name：方法名称，是一个唯一的标识符，且是大小写敏感的。它不能与类中声明的其他标识符相同。
- Parameter list：参数列表，使用圆括号括起来，该参数是用来传递和接收方法的数据。参数列表是指方法的参数类型、顺序和数量。参数是可选的，也就是说，一个方法可能不包含参数。
- Method body：方法主体，包含了完成任务所需的指令集。

### 递归方法调用

一个方法可以自我调用。这就是所谓的 递归。下面的实例使用递归函数计算一个数的阶乘：

```cs
public int factorial(int num)
{
    /* 局部变量定义 */
    int result;

    if (num == 1)
    {
        return 1;
    }
    else
    {
        result = factorial(num - 1) * num;
        return result;
    }
}
```

### 参数传递

当调用带有参数的方法时，您需要向方法传递参数。在 C# 中，有三种向方法传递参数的方式：

| 方式     | 描述                                                                                                                                                             |
| -------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 值参数   | 这种方式复制参数的实际值给函数的形式参数，实参和形参使用的是两个不同内存中的值。在这种情况下，当形参的值发生改变时，不会影响实参的值，从而保证了实参数据的安全。 |
| 引用参数 | 这种方式复制参数的内存位置的引用给形式参数。这意味着，当形参的值发生改变时，同时也改变实参的值。                                                                 |
| 输出参数 | 这种方式可以返回多个值。                                                                                                                                         |

### 按值传递参数

这是参数传递的默认方式。在这种方式下，当调用一个方法时，会为每个值参数创建一个新的存储位置。

实际参数的值会复制给形参，实参和形参使用的是两个不同内存中的值。所以，当形参的值发生改变时，不会影响实参的值，从而保证了实参数据的安全。

### 按引用传递参数
引用参数是一个对变量的内存位置的引用。当按引用传递参数时，与值参数不同的是，它不会为这些参数创建一个新的存储位置。引用参数表示与提供给方法的实际参数具有相同的内存位置。

在 C# 中，使用 ref 关键字声明引用参数。

```cs
public void swap(ref int x, ref int y)
{
    int temp;

    temp = x; /* 保存 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 temp 赋值给 y */
}

static void Main(string[] args)
{
    NumberManipulator n = new NumberManipulator();
    int a, b;

    /* 调用函数来交换值 */
    n.swap(ref a, ref b);
}
```

### 按输出传递参数

return 语句可用于只从函数中返回一个值。但是，可以使用 输出参数 来从函数中返回两个值。输出参数会把方法输出的数据赋给自己，其他方面与引用参数相似。

```cs
public void getValue(out int x )
{
    int temp = 5;
    x = temp;
}
   
static void Main(string[] args)
{
    NumberManipulator n = new NumberManipulator();
    /* 局部变量定义 */
    int a = 100;

    /* 调用函数来获取值 */
    n.getValue(out a);
}
```

提供给输出参数的变量不需要赋值。当需要从一个参数没有指定初始值的方法中返回值时，输出参数特别有用。请看下面的实例，来理解这一点：

--------------------------------------------------------------------------------

EOF