#include <iostream>
using namespace std;
const char tres[3] {' ', 'X', 'O'};

void printTablero(int*** tablero, int i, int j, int k){
    for (int*** p = tablero; p <= (tablero + i); p++){
        for (int** q = *p; q <= (*p + j); q++){
            for (int* r = *q; r <= (*q + k); r++){
                cout << "*" << tres[*r] << "*";
            }
            cout << endl << "*********" << endl;
        }
        cout << endl;
    }
}
int getValor(int*** tablero, int i, int j, int k){
    int*** p = (tablero + i);
    int** q = (*p + j);
    int* r = (*q + k);
    return *r;
}
bool setValor(int*** tablero, int i, int j, int k, int player){
    int*** p = (tablero + i);
    int** q = (*p + j);
    int* r = (*q + k);
    if (*r == 0) {
        *r = player;
        return true;
    }
    else
        return false;
}
int tresEnRaya(int*** tablero){
    int c(0), c1(0), c2(0), c3(0),  c4(0),  c5(0),  c6(0),  c7(0),  c8(0);
    int d(0), d1(0), d2(0), d3(0),  d4(0),  d5(0),  d6(0),  d7(0),  d8(0);
    for(int i = 0; i < 3; ++i)
    {
        c3 = 0; c4 = 0; c8 = 0;
        d3 = 0; d4 = 0; d8 = 0;
        if(getValor(tablero, i, i, i) == 1)//me analiza la  diagonal en los 3 planos a la vez (1)
            ++c6;                                                           //        (1)
        //          (1)
        if (getValor(tablero, i, i, i) == 2)
            ++d6;
        if(getValor(tablero, i, i, 2 - i) == 1)//lo mismo pero      (1)
            ++c7;           //                        (1)
        //                          (1)
        if (getValor(tablero, i, i, 2 - i) == 2)
            ++d7;
        for(int j = 0; j < 3; ++j)
        {
            c = 0; c1 = 0; c2 = 0;
            d = 0; d1 = 0; d2 = 0;
            for(int t = 0; t < 3; ++t)
            {
                if(getValor(tablero, i, j, t) == 1)//me analiza los (1 1 1)en un mismo plano
                    ++c;
                if(getValor(tablero, i, j, t) == 2)
                    ++d;
                if(getValor(tablero, i, t, j) == 1)//me analiza los (100)
                    ++c1;                //               (100)
                //                (100)en un mismo plano
                if(getValor(tablero, i, t, j) == 2)
                    ++d1;
                if(getValor(tablero, t, i, j) == 1)//me analiza 1 que esta en la misma poscicion pero en diferente �plano
                    ++c2;
                if(getValor(tablero, t, i, j) == 2)
                    ++d2;
            }
            if(c == 3 || c1 == 3 || c2 == 3)
                return 1;
            if (d == 3 || d1 == 3 || d2 == 3)
                return 2;
            if(getValor(tablero, j, i, j) == 1)//me analiza los (1)
                ++c3;                  //             (1)
            //            (1)pero en diferentes planos
            if(getValor(tablero, j, i, j) == 2)
                ++d3;
            if(getValor(tablero, j, j, i) == 1)//me analiza los(1 1 1) en diferentes planos
                ++c4;
            if(getValor(tablero, j, j, i) == 2)
                ++d4;
            if(getValor(tablero, i, j, j) == 1)//me analiza (1)
                ++c5;                   //          (1)
            //              (1)en un mismo plano
            if(getValor(tablero, i, j, j) == 2)
                ++d5;
            if(getValor(tablero, i, j, 2 - j) == 1)//me analiza los         (1)
                ++c8;                   //                     (1)
            //                    (1)en un mismo plano;
            if(getValor(tablero, i, j, 2 - j) == 2)
                ++d8;
        }
        if(c3 == 3 || c4 == 3 || c6 == 3 || c5 == 3 || c7 == 3 || c8 == 3)
            return 1;
        if(d3 == 3 || d4 == 3 || d6 == 3 || d5 == 3 || d7 == 3 || d8 == 3)
            return 2;
    }
    return 0;
}

int main() {
    int*** tablero = new int**[3];
    for (int i = 0; i < 3; i++){
        tablero[i] = new int*[3];
        for (int j = 0; j < 3; j++){
            tablero[i][j] = new int[3];
            for (int k = 0; k < 3; k++){
                tablero[i][j][k] = 0;
            }
        }
    }
    int m = sizeof(tablero)/ sizeof(int);
    int n = sizeof(tablero[0])/ sizeof(int);
    int p = sizeof(tablero[0][0])/ sizeof(int);
    printTablero(tablero, m, n, p);
    int x, y, z, player = 1, game = 0;
    while (game == 0){
        printf("Jugador %d:\n", player);
        //cout << "Coordenada X: ";
        cin >> x;
        //cout << "Coordenada Y: ";
        cin >> y;
        //cout << "Coordenada Z: ";
        cin >> z;
        while (x > 2 || y > 2 || z > 2){
            cout << "Error. Ingrese numeros entre 0 y 2.\n";
            //cout << "Coordenada X: ";
            cin >> x;
            //cout << "Coordenada Y: ";
            cin >> y;
            //cout << "Coordenada Z: ";
            cin >> z;
        }
        if (setValor(tablero, x, y, z, player)){
            game = tresEnRaya(tablero);
            player++;
            if (player == 3)
                player = 1;
            printTablero(tablero, m, n, p);
            if (game == 1)
                cout << "GANÓ JUGADOR 1" << endl;
            else if (game == 2)
                cout << "GANÓ JUGADOR 2" << endl;
        }
    }
    return 0;
}