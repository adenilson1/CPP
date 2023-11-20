#include <iostream>
using namespace std;

int main() {
    double notaFinal;

    cout << "Entre com a nota final: ";
    cin >> notaFinal;

    bool bomComportamento;
    cout << "O aluno/aluna tem bom comportamento: ";
    cin >> bomComportamento;

    bool bomEstudante = notaFinal >= 9 && bomComportamento;
    bool medianoEstudante = (notaFinal >= 9) ^ bomComportamento;
    bool mauEstudante = notaFinal <= 3 && !bomComportamento;
    bool cancelamentoFinanciamento = notaFinal <=3 || !bomComportamento;

    cout << "O aluno eh um bom estudante?: " << bomEstudante << endl;
    cout << "O aluno eh um medio estudante?: " << medianoEstudante << endl;
    cout << "O aluno eh um mau estudante?: " << mauEstudante << endl;
    cout << "Financiamento financiamento?: " << cancelamentoFinanciamento << endl;



    return 0;
}