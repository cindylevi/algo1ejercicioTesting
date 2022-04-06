#include "gtest-1.8.1/gtest.h"

#include "../src/Funciones.h"
Funciones f;
TEST(fecha, ej1_bisiesto) {
 EXPECT_FALSE(f.esBisiesto(1));
 EXPECT_TRUE(f.esBisiesto(4));
 EXPECT_FALSE(f.esBisiesto(123));
 EXPECT_FALSE(f.esBisiesto(100));
 EXPECT_TRUE(f.esBisiesto(400));
 EXPECT_FALSE(f.esBisiesto(401));
}

TEST(fecha, ej2_diasEnMes) {
  EXPECT_EQ(f.diasEnMes(1, 1), 31);
  EXPECT_EQ(f.diasEnMes(1, 2), 28);
  EXPECT_EQ(f.diasEnMes(4, 2), 29);
  EXPECT_EQ(f.diasEnMes(1, 5), 31);
  EXPECT_EQ(f.diasEnMes(1, 6), 30);
  EXPECT_EQ(f.diasEnMes(1, 7), 31);
  EXPECT_EQ(f.diasEnMes(1, 8), 31);
  EXPECT_EQ(f.diasEnMes(1, 9), 30);
  EXPECT_EQ(f.diasEnMes(1, 11), 30);
  EXPECT_EQ(f.diasEnMes(1, 12), 31);
}
