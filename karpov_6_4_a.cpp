/*
Опишите класс А таким образом, чтобы были верными все конструкции следующего фрагмента программы:
a)
*/

class A {
  public:
  static  int x;
  void get_0 () const{}
};

int A::x;
int main () {
const A a;
a.x = 1;
a.get_0();
return 0;
}
