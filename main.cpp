/*
 * created by Danil Kireev, PFUR NFI-201, 27.09.18, 09:00
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 46
 * Дано число R и массив размера N. Найти два различных элемента массива, сумма
 * которых наиболее близка к числу R, и вывести эти элементы в порядке возрастания
 * их индексов (то есть такой элемент A K , для которого величина |A K – R| является
 * минимальной).
 */

int main() {
    cout << "нахождение двух различных элемента массива, сумма которых наиболее близка к числу R" << endl;
    Q z;
    int r;
    string res;
    cout << "введите число R";
    cin >> r;
    z.user_input();
    z.print();
    res = z.search(r);
    if(!res.empty()) {cout << "искомые элементы матрицы: " << res << endl;}
    else cout << "элемент не найден";
    return 0;
}
