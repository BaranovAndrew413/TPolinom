#include "..\Project3\TPolinom.h"


#include "gtest.h"
#include <iostream>
TEST(TMonom, can_create_monom)
{
	ASSERT_NO_THROW(TMonom m);
}

TEST(TMonom, can_ins_monom_with_pos_coef)
{
	TMonom m;
	m.p_x = 0;
	m.p_y = 0;
	m.p_z = 0;
	ASSERT_NO_THROW(m.coef = 1);
}

TEST(TMonom, can_ins_monom_with_neg_coef)
{
	TMonom m;
	m.p_x = 0;
	m.p_y = 0;
	m.p_z = 0;
	ASSERT_NO_THROW(m.coef = -1);
}

TEST(TMonom, can_ins_monom_with_neg_step)
{
	TMonom m;
	m.p_x = 1;
	m.p_y = 1;
	m.p_z = 1;
	ASSERT_NO_THROW(m.coef = 5);
}

TEST(TMonom, can_ins_monom_with_pos_step)
{
	TMonom m;
	m.p_x = -1;
	m.p_y = -1;
	m.p_z = -1;
	ASSERT_NO_THROW(m.coef = -5);
}

TEST(TMonom, can_compare_the_monomials)
{
	TMonom m1, m2;
	m1.coef = 5;
	m1.p_x = 1;
	m1.p_y = 1;
	m1.p_z = 1;
	m2.coef = 7;
	m2.p_x = 1;
	m2.p_y = 1;
	m2.p_z = 1;
	EXPECT_EQ(m1 == m2, 1);
}

TEST(TMonom, can_ne_monoms)
{
	TMonom m1, m2;
	m1.coef = 5;
	m1.p_x = 1;
	m1.p_y = 1;
	m1.p_z = 1;
	m2.coef = 7;
	m2.p_x = 1;
	m2.p_y = 2;
	m2.p_z = 3;
	EXPECT_EQ(m1 != m2, 1);
}

TEST(TMonom, Sravnenie)
{
	TMonom m1, m2;
	m1.coef = 5;
	m1.p_x = 1;
	m1.p_y = 1;
	m1.p_z = 1;
	m2.coef = 7;
	m2.p_x = 1;
	m2.p_y = 2;
	m2.p_z = 3;
	EXPECT_EQ(m1 <m2, 1);
	EXPECT_EQ(m1 > m2, 0);
}

TEST(TPolinom, can_create_polynom)
{
	ASSERT_NO_THROW(TPolinom p);
}

TEST(TPolinom, can_create_polynom_with_arr)
{
	int arr[2][2];
	arr[0][0] = 1;
	arr[1][0] = 1;
	arr[0][1] = 1;
	arr[1][1] = 1;
	ASSERT_NO_THROW(TPolinom p(arr, 2));
}

TEST(TPolinom, can_copy_polynom)
{
	int arr[2][2];
	arr[0][0] = 1;
	arr[1][0] = 1;
	arr[0][1] = 1;
	arr[1][1] = 1;
	TPolinom p(arr, 2);
	ASSERT_NO_THROW(TPolinom p_copy(p));
}

TEST(TPolynom, can_add_monom)
{
	TPolinom p;
	TMonom a;
	a.coef = 1;
	a.p_x = 1;
	a.p_y = 1;
	a.p_z = 1;
	ASSERT_NO_THROW(p.AddMonom(a));
	ASSERT_NO_THROW(p * 5);
	ASSERT_NO_THROW(p *= 5);
	ASSERT_NO_THROW(p * a);
	ASSERT_NO_THROW(p *= a);
}
TEST(TPolynom, stop)
{
	system("pause");
}
