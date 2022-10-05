// 下面的程序框架只显示了函数定义和变量声明。

int a;

void f(int b)
{
  int c;
}
void g(void)
{
  int d;
  {
    int e;
  }
}
int main(void)
{
  int f;
}

// 列出在下面每种作用域内的所有变量的名字和形式参数的名字。
// (a) f 函数
// (b) g 函数
// (c) 声明 e 的程序块
// (d) main 函数

// 首先我们要明确题目要我们做的事情：
// 1 找到题目要求的作用域
// 2 找到作用域内的变量名和形式参数名

// (a)
// 作用域在 3-6 行
// a,b,c 其中 a 是外部变量，b 是形式参数，c 是变量

// (b)
// 作用域在 7-9 和 13 行
// a,d 其中 a 是外部变量，d 是变量

// (c)
// 作用域在 7-13 行
// a,d,e 其中 a 是外部变量，d 是变量，e 是变量
// 本题中要明确程序块的定义才能找到正确的作用域。
// 首先“程序块是包含声明的复合语句，通常形式为{多条声明 多条语句}”。可以看到 e 上下两个花括号之间只有一个关于 e 的声明，所以声明 e 的程序块并不仅在 10-12 行的花括号间。
// 其次函数也是程序块，可以看到 e 的声明是在 g 函数之内的，在这种 e 的声明不处于包含声明的复杂语句的情况下，只有 g 函数才能作为声明 e 的程序块。

// (d)
// 作用域在 14-17 行
// a,f 其中 a 是外部变量，f 是变量
