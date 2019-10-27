/*
Опишите класс А таким образом, чтобы были верными все конструкции следующего фрагмента программы:
a)
*/

class A  {
  public:
  static const char a ;
  static void f () {}
};

const char A::a = '+';
int main () {
A ob;
A::f();
return 0;
}
