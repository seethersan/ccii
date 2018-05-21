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
bool tresEnRaya(int*** tablero){
    bool game = true;
    if (getValor(tablero, 0, 0, 0) == getValor(tablero, 0, 0, 1) &&
        getValor(tablero, 0, 0, 1) == getValor(tablero, 0, 0, 2)){
        if (getValor(tablero, 0, 0, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 0, 0, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 0, 0, 0) == getValor(tablero, 0, 1, 0) &&
        getValor(tablero, 0, 1, 0) == getValor(tablero, 0, 2, 0)){
        if (getValor(tablero, 0, 0, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 0, 0, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 0, 0, 0) == getValor(tablero, 0, 1, 0) &&
        getValor(tablero, 0, 1, 1) == getValor(tablero, 0, 2, 2)){
        if (getValor(tablero, 0, 0, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 0, 0, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 0, 0, 2) == getValor(tablero, 0, 1, 2) &&
        getValor(tablero, 0, 1, 2) == getValor(tablero, 0, 2, 2)){
        if (getValor(tablero, 0, 0, 2) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 0, 0, 2) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 0, 2, 0) == getValor(tablero, 0, 2, 1) &&
        getValor(tablero, 0, 2, 1) == getValor(tablero, 0, 2, 2)){
        if (getValor(tablero, 0, 2, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 0, 2, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 0, 1, 0) == getValor(tablero, 0, 1, 1) &&
        getValor(tablero, 0, 1, 1) == getValor(tablero, 0, 1, 2)){
        if (getValor(tablero, 0, 1, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 0, 1, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 0, 0, 2) == getValor(tablero, 0, 1, 1) &&
        getValor(tablero, 0, 1, 1) == getValor(tablero, 0, 2, 2)){
        if (getValor(tablero, 0, 0, 2) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 0, 0, 2) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 1, 0, 0) == getValor(tablero, 1, 0, 1) &&
        getValor(tablero, 1, 0, 1) == getValor(tablero, 1, 0, 2)){
        if (getValor(tablero, 1, 0, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 1, 0, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 1, 0, 0) == getValor(tablero, 1, 1, 0) &&
        getValor(tablero, 1, 1, 0) == getValor(tablero, 1, 2, 0)){
        if (getValor(tablero, 1, 0, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 1, 0, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 1, 0, 0) == getValor(tablero, 1, 1, 0) &&
        getValor(tablero, 1, 1, 1) == getValor(tablero, 1, 2, 2)){
        if (getValor(tablero, 1, 0, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 1, 0, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 1, 0, 2) == getValor(tablero, 1, 1, 2) &&
        getValor(tablero, 1, 1, 2) == getValor(tablero, 1, 2, 2)){
        if (getValor(tablero, 1, 0, 2) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 1, 0, 2) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 1, 2, 0) == getValor(tablero, 1, 2, 1) &&
        getValor(tablero, 1, 2, 1) == getValor(tablero, 1, 2, 2)){
        if (getValor(tablero, 1, 2, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 1, 2, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 1, 1, 0) == getValor(tablero, 1, 1, 1) &&
        getValor(tablero, 1, 1, 1) == getValor(tablero, 1, 1, 2)){
        if (getValor(tablero, 1, 1, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 1, 1, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 1, 0, 2) == getValor(tablero, 1, 1, 1) &&
        getValor(tablero, 1, 1, 1) == getValor(tablero, 1, 2, 2)){
        if (getValor(tablero, 1, 0, 2) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 1, 0, 2) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 2, 0, 0) == getValor(tablero, 2, 0, 1) &&
        getValor(tablero, 2, 0, 1) == getValor(tablero, 2, 0, 2)){
        if (getValor(tablero, 2, 0, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 2, 0, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 2, 0, 0) == getValor(tablero, 2, 1, 0) &&
        getValor(tablero, 2, 1, 0) == getValor(tablero, 2, 2, 0)){
        if (getValor(tablero, 2, 0, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 2, 0, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 2, 0, 0) == getValor(tablero, 2, 1, 0) &&
        getValor(tablero, 2, 1, 1) == getValor(tablero, 2, 2, 2)){
        if (getValor(tablero, 2, 0, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 2, 0, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 2, 0, 2) == getValor(tablero, 2, 1, 2) &&
        getValor(tablero, 2, 1, 2) == getValor(tablero, 2, 2, 2)){
        if (getValor(tablero, 2, 0, 2) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 2, 0, 2) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 2, 2, 0) == getValor(tablero, 2, 2, 1) &&
        getValor(tablero, 2, 2, 1) == getValor(tablero, 2, 2, 2)){
        if (getValor(tablero, 2, 2, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 2, 2, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 2, 1, 0) == getValor(tablero, 2, 1, 1) &&
        getValor(tablero, 2, 1, 1) == getValor(tablero, 2, 1, 2)){
        if (getValor(tablero, 2, 1, 0) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 2, 1, 0) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    if (getValor(tablero, 2, 0, 2) == getValor(tablero, 2, 1, 1) &&
        getValor(tablero, 2, 1, 1) == getValor(tablero, 2, 2, 2)){
        if (getValor(tablero, 2, 0, 2) == 1){
            cout << "Gano el jugador 1" << endl;
            game = false;
        }
        else if (getValor(tablero, 2, 0, 2) == 2){
            cout << "Gano el jugador 2" << endl;
            game = false;
        }
    }
    return game;
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
    int x, y, z, player = 1;
    bool game = true;
    while (game){
        printf("Jugador %d:\n", player);
        cout << "Coordenada X: ";
        cin >> x;
        cout << "Coordenada Y: ";
        cin >> y;
        cout << "Coordenada Z: ";
        cin >> z;
        if (x > 2 || y > 2 || z > 2){
            cout << "Error. Ingrese numeros entre 0 y 2.\n";
            cout << "Coordenada X: ";
            cin >> x;
            cout << "Coordenada Y: ";
            cin >> y;
            cout << "Coordenada Z: ";
            cin >> z;
        }
        if (setValor(tablero, x, y, z, player)){
            game = tresEnRaya(tablero);
            player++;
            if (player == 3)
                player = 1;
            printTablero(tablero, m, n, p);
        }
    }
    return 0;
}