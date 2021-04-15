// ������� 4 - 3 - 2 - 1
// ��������� �� ������ ����������������� ���������� ������.
// ��������� �� ������ �������������� �� ���������� ��������.
// ���������, ����������� �� ������ ����������������� ��������� �������������.
#include "container.h"

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
    cout << "START" << endl;
    container c;
    containerInit(c);
    Read_Container(ifst, c);
    Out_Container(ofst, c);
    Multi(c, ofst);
    containerClear(c);
    cout << "END" << endl;
    return 0;
}
