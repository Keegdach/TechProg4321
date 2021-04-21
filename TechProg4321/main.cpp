// Вариант 4 - 3 - 2 - 1
// Контейнер на основе однонаправленного кольцевого списка.
// Разбиение на модули осуществляется по объектному принципу.
// Обобщение, построенное на основе непосредственного включения специализаций.
#include "container.h"
const bool TESTING = false;

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "incorrect command line! " << endl
            << "Waited: command in_file out_file"
            << endl;
        exit(1);
    }
    ifstream ifst(argv[1]);
    ofstream ofst(argv[2]);
    if (!ifst.is_open()) {
        std::cout << "I/O File is missing.\n";
        return 1;
    }
    cout << "START" << endl;
    container c;
    ContainerInit(c);
    ReadContainer(ifst, c);
    OutContainer(ofst, c);
    ofst << "Sorted container:" << std::endl;
    Sort(c);
    OutContainer(ofst, c);
    Multi(c, ofst);
    ContainerClear(c);
    cout << "END" << endl;
    return 0;
}
