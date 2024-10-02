#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valorHora, horasTrabalhadas, salarioBruto, ir, inss, fgts, totalDescontos, salarioLiquido;

    cout << "Digite o valor da hora: ";
    cin >> valorHora;
    cout << "Digite a quantidade de horas trabalhadas no mês: ";
    cin >> horasTrabalhadas;

    salarioBruto = valorHora * horasTrabalhadas;

    if (salarioBruto <= 900) {
        ir = 0;
    } else if (salarioBruto <= 1500) {
        ir = salarioBruto * 0.05;
    } else if (salarioBruto <= 2500) {
        ir = salarioBruto * 0.10;
    } else {
        ir = salarioBruto * 0.20;
    }

    inss = salarioBruto * 0.10;

    fgts = salarioBruto * 0.11;

    totalDescontos = ir + inss;

    salarioLiquido = salarioBruto - totalDescontos;

    cout << fixed << setprecision(2);
    cout << "Salário Bruto: R$ " << salarioBruto << endl;
    cout << "(-) IR (" << (ir / salarioBruto) * 100 << "%) : R$ " << ir << endl;
    cout << "(-) INSS (10%) : R$ " << inss << endl;
    cout << "FGTS (11%) : R$ " << fgts << endl;
    cout << "Total de descontos : R$ " << totalDescontos << endl;
    cout << "Salário Líquido : R$ " << salarioLiquido << endl;

    return 0;
}
