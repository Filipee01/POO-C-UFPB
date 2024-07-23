#include <iostream>


class ponto2d {
    int x;
    int y;
public:
    //Método construtor
    ponto2d(int xx, int yy) {
    x = xx;
    y = yy;
    }

    ponto2d() {
    x = 0;
    y = 0;
    }

    ~ponto2d() {
        std::cout << "destrutor ponto2d ";
        std::cout << "x = " x << ", ";
        std::cout << "y = " y;
        std::cout << std::endl;
    }

    int get_x() {
        return x;
    }
    void set_x(int xx) {
        x = xx;
    }

    int get_y() {
        return y;
    }
    void set_y(int yy) {
        y = yy;
    }
    void print_info() {

        std::cout << "ponto2d(";
        std::cout << "x = " << x << ", ";
        std::cout << "y = " << y;
        std::cout << std::endl;
    }

};

int main() {
    ponto2d p1(10,20);
    ponto2d p2;
    ponto2d* pp2;
    ponto2d* pp3;

    pp2 = &p2;

    pp3 = new ponto2d


    pp2 ->

    p1.print_info();
    p2.print_info();

    return 0;
}

/*alocar espaço de memoria
class vetor {
    int* conjunto;
    int qtd;
public:
    vetor(int q){
        qtd = q;
        conjunto = (int*)malloc(q * sizeof(int));
    }
~vetor () {
    free(conjunto);
}


};

//método destrutor
int main() {
    vetor v1(5);
    vetor* pv2 = new vetor(10);

    delete pv2;
}*/
