#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	
	// variáveis
	int opcao; // opção que o usuario escolhe
	
	// gerando o numero aleatorio
	srand(time(0)); // inicializa biblioteca com valor do relogio 0
	int numero_gerado = rand() % 3 + 1; // gerar numero de 1 a 3
	
	// entrada
	cout << "1) Pedra \n";
	cout << "2) Papel \n";
	cout << "3) Tesoura \n";
	cout << "Escolhar pedra, papel ou tesoura: ";
	cin >> opcao;
	
	// Processamento
	if (opcao >= 1 && opcao <= 3) {
			switch(numero_gerado) {
		case 1:
			if(opcao == 1) {
				cout << "Empate ";
			}
			if(opcao == 2) {
				cout << "Ganhou \n";
			}
			if(opcao == 3) {
				cout << "Perdeu \n";
			break;
			}
		case 2:
			if(opcao == 1) {
				cout << "Perdeu \n";
			}
			if(opcao == 2) {
				cout << "Empate \n";
			}
			if(opcao == 3) {
				cout << "Ganhou \n";
			}
			break;
		case 3:
			if(opcao == 1) {
				cout << "Ganhou \n";
			}
			if(opcao == 2) {
				cout << "Perdeu \n";
			}
			if(opcao == 3) {
				cout << "Empate \n";
			}
			break;	
		}	
	}
		else {
		cout << "Opcao invalida \n";
		}
	
}
