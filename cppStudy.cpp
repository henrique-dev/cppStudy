// ConsoleApplication1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "mynamespace.h"

using std::cout, std::endl;

namespace MyFTP = MyLibraries::Networking::FTP;

int main()
{
	//cout << "Hello World!" << endl;
	//mycode::foo();
	//MyLibraries::Networking::FTP::connect();
	//MyFTP::connect();

	int uninitialiazedInt = NULL;
	int initializedInt = 7;
	cout << uninitialiazedInt << " is a random value" << endl;
	cout << initializedInt << " was assigned an initial value" << endl;

	// The most common types
	// positive and negative integers; the range depends on the compiler (usually 4 bytes)
	int signed_int1 = -7;
	signed int signed_int2 = -6;
	signed signed_int3 = -2;

	// short integer (usually 2 bytes)
	short signed_short1 = 13;
	short int signed_short2 = 14;
	signed short signed_short3 = -15;
	signed short int signed_short4 = -5;

	// long integer (usally 4 bytes)
	long signed_long1 = -7L;
	long int signed_long2 = 2L;
	signed long signed_long3 = -3L;
	signed long int signed_long4 = 15L;

	// long long integer; the range depends on the compiler, but is at least the same as for long (usually 8 bytes)
	long long signed_long_long1 = -7LL;
	long long int signed_long_long2 = 2LL;
	signed long long signed_long_long3 = -3LL;
	signed long long int signed_long_long4 = 15LL;

	// limits preceding types to values >= 0
	unsigned int unsigned_int1 = 6U;
	unsigned unsigned_int2 = 2U;
	unsigned short unsigned_short1 = 15U;
	unsigned short int unsigned_short2 = 5U;
	unsigned long unsigned_long1 = 3UL;
	unsigned long int unsigned_long2 = 5400UL;
	unsigned long long unsigned_long_long1 = 3ULL;
	unsigned long long int unsigned_long_long2 = 15ULL;

	// floating-point numbers
	float float1 = 7.2f;

	// double precision numbers; precision is at least the same as for float
	double double1 = 7.2;

	// long double precision numbers; precision is at least the same as for double
	long double long_double1 = 16.98L;

	// a single charater
	char char1 = 'm';

	// a single 16-bit character
	char16_t char16 = u'm';

	// a single 32-bit character
	char32_t char32 = U'm';


	return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
