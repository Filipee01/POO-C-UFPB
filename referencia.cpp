#include <iostream>

class coisa {
  int x;
public:
  coisa(int i) {
    x = i;
    std::cout << "Construtor de coisa(" << x << ")" << std::endl;
  }
coisa(coisa& c){
  x= c.x;
  std::cout << "Construtor de coisa(" << x << ")" << std::endl;

}
~coisa() {
  std::cout <<"~coisa(" << x << ")" << std::endl;
}
int get_x() {
  return x;
}
void set_x(int i) {
  x = i;
}
};

void dobrar(int &valor) { valor *= 2; }
void dobrar(coisa& c) {
  c.set_x(c.get_x() * 2);
}

int main(void) {
  int var = 10;
  int x = 100;

  int &ref_var = var;

  ref_var = 100;

  ref_var++;

  ref_var = x;

  dobrar(var);
  dobrar(ref_var);
  std::cout << var << std::endl;

  coisa c1(var);
  dobrar(c1);

  std::cout << c1.get_x() << std::endl;

  return 0;
}