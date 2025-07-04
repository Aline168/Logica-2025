#include <iostream>
#include <locale.h>


using namespace std;


const int N = 9;
int tabuleiro[N][N];

void printtabuleiro()
{
    cout << "\n=== Sudoku ===\n";
    for (int i = 0; i < N; i++)
    {
        if (i % 3 == 0 && i != 0) cout << "------+-------+------\n";
        for (int j = 0; j < N; j++)
        {
            if (j % 3 == 0 && j != 0) cout << "| ";
            cout << tabuleiro[i][j] << " ";
        }
        cout << "\n";
    }
}


bool isValid(int linha, int col, int num)
{
    for (int i = 0; i < N; i++)
    {
        if (tabuleiro[linha][i] == num || tabuleiro[i][col] == num)
            return false;
    }

    int linhainicial = linha - linha % 3, colinicial = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tabuleiro[i + linhainicial][j + colinicial] == num)
                return false;

    return true;
}


bool isComplete()
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (tabuleiro[i][j] == 0)
                return false;
    return true;
}

int sudoku()
{
    int linha, col, num;
            while (!isComplete())
        {
            printtabuleiro();
            cout << "\nDigite linha (0-8), coluna (0-8) e número (1-9): ";
            cin >> linha >> col >> num;

            if (linha < 0 || linha >= N || col < 0 || col >= N || num < 1 || num > 9)
            {
                cout << "Entrada inválida. Tente novamente.\n";
                continue;
            }

            if (tabuleiro[linha][col] != 0)
            {
                cout << "Essa célula já está preenchida.\n";
                continue;
            }

            if (isValid(linha, col, num))
            {
                tabuleiro[linha][col] = num;
            }
            else
            {
                cout << "Jogada inválida! Número já existe na linha, coluna ou região.\n";
            }

        }


        printtabuleiro();
        return 1;


}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int escolha = -1;
    const char* nomeArquivo =   "input2.txt";

    FILE* arquivo = fopen(nomeArquivo, "r");
    if(arquivo == NULL){
            cerr << "Erro ao abrir o arquivo"<< nomeArquivo << endl;
    return 1;
    }
    else {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fscanf(arquivo, "%d", &tabuleiro[i][j]);
        }
    }
    fclose(arquivo);
}

    string regras = "Comece observando as células preenchidas e as células vazias na grade.\nUse a lógica e o raciocínio para identificar quais números podem ser inseridos em cada célula vazia, evitando repetições nas linhas, colunas e blocos.\nPode ser útil usar um lápis e fazer anotações nas células para rastrear os possíveis números que podem ser inseridos.\nAumente gradualmente o número de células preenchidas até que a grade esteja completa e todas as regras sejam respeitadas.\n";

    while(escolha != 0)
    {
        cout << "Escolha:\n0 para sair\n1 para regras\n2 para sudoku\n";
        cin >> escolha;
        if (escolha == 1)
        {
            cout << regras;
        }
        else if (escolha == 2)
        {
            if(sudoku() == 1)
            {
                cout << "\nParabéns! Você completou o Sudoku.\n";
            }

        }
    }
    cout << "saindo...";

}








