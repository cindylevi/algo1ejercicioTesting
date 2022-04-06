#include "gtest-1.8.1/gtest.h"
#include "../src/Libreta.h"
#include "../src/Truco.h"
#include <map>
#include <cmath>

using namespace std;

// Ejercicio 4
TEST(Aritmetica, suma) {
    EXPECT_EQ(22,15+7);
}

// Ejercicio 5
TEST(Aritmetica, potencia ) {
    EXPECT_EQ(100,pow(10,2));
}

// Ejercicios 6..9
TEST(Aritmetica, potencia_general ) {
    for (int i = -5; i < 6; ++i) {
        EXPECT_EQ(i*i,pow(i,2));
    }
}

TEST(Diccionario, obtener ) {
    map<int, int> dicc;
    dicc[10] = 1;
    EXPECT_EQ(dicc[10],1);

}

TEST(Diccionario, definir ) {
    map<int, int> dicc;
    EXPECT_EQ(dicc.count(10),0);
    dicc[10] = 1;
    EXPECT_EQ(dicc.count(10),1);

}

TEST(Truco, inicio ) {
    Truco t = Truco();
    EXPECT_EQ(t.puntaje_j1(),0);
    EXPECT_EQ(t.puntaje_j2(),0);
}

TEST(Truco, buenas ) {
    Truco t = Truco();
    EXPECT_FALSE(t.buenas(1));

    for (int i = 0; i < 15; ++i) {
        t.sumar_punto(1);
    }
    EXPECT_FALSE(t.buenas(1));
    t.sumar_punto(1);
    EXPECT_TRUE(t.buenas(1));
    t.sumar_punto(1);
    t.sumar_punto(1);
    EXPECT_TRUE(t.buenas(1));
}