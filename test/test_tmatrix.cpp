#include "utmatrix.h"

#include <gtest.h>

TEST(TMatrix, can_create_matrix_with_positive_length)
{
  ASSERT_NO_THROW(TMatrix<int> m(5));
}

TEST(TMatrix, cant_create_too_large_matrix)
{
  ASSERT_ANY_THROW(TMatrix<int> m(MAX_MATRIX_SIZE + 1));
}

TEST(TMatrix, throws_when_create_matrix_with_negative_length)
{
  ASSERT_ANY_THROW(TMatrix<int> m(-5));
}

TEST(TMatrix, can_create_copied_matrix)
{
  TMatrix<int> m(5);

  ASSERT_NO_THROW(TMatrix<int> m1(m));
}

TEST(TMatrix, copied_matrix_is_equal_to_source_one)
{
	TMatrix<int> m(4);
	m[1][1] = 3;
	TMatrix<int> m1(m);
	EXPECT_EQ(m,m1);
}

TEST(TMatrix, copied_matrix_has_its_own_memory)
{
	TMatrix<int> m(4);
	m[1][1] = 3;
	TMatrix<int> m1(m);
	m1[1][1] = 2;
	EXPECT_EQ(m[1][1], m1[1][1]);
}

TEST(TMatrix, can_get_size)
{
	TMatrix<int> m(5);
	EXPECT_EQ(m.GetSize(), 5);
}

TEST(TMatrix, can_set_and_get_element)
{
	TMatrix<int> m(4);
	m[1][1] = 3;
	EXPECT_EQ(m[1][1], 3);
}

TEST(TMatrix, throws_when_set_element_with_negative_index)
{
	TMatrix<int> m(4);
	ASSERT_ANY_THROW(m[-1][-1]=1);
}

TEST(TMatrix, throws_when_set_element_with_too_large_index)
{
	TMatrix<int> m(4);
	ASSERT_ANY_THROW(m[10][1] = 1);
	ASSERT_ANY_THROW(m[1][10] = 1);
}

TEST(TMatrix, can_assign_matrix_to_itself)
{
	TMatrix<int> m(4);
	for (int i = 0; i < 4; i++)
	for (int j = 0; j < 4; j++)
		m[i][j] = i + 1;
	EXPECT_EQ(m,m);
}

TEST(TMatrix, can_assign_matrices_of_equal_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, assign_operator_change_matrix_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, can_assign_matrices_of_different_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, compare_equal_matrices_return_true)
{
  ADD_FAILURE();
}

TEST(TMatrix, compare_matrix_with_itself_return_true)
{
  ADD_FAILURE();
}

TEST(TMatrix, matrices_with_different_size_are_not_equal)
{
  ADD_FAILURE();
}

TEST(TMatrix, can_add_matrices_with_equal_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, cant_add_matrices_with_not_equal_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, can_subtract_matrices_with_equal_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, cant_subtract_matrixes_with_not_equal_size)
{
  ADD_FAILURE();
}

