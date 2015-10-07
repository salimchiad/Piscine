int	solve_grid(char t[9][9], int row, int col);

int	end_grid(char t[9][9])
{
	int	row;
	int	col;

	for (row = 8; row >= 0; --row)
	{
		for (col = 8; col >= 0; --col)
			if (!t[row][col])
				return (0);
	}
	return (1);
}

int main(char t[9][9], char vacant[9], int row, int col)
{
	int	i;
	int	j;

	for (i = 0; i < 9; ++i)
	{
		if (t[row][i])
			vacant[t[row][i] - 1] = 0;
		if (t[i][col])
			vacant[t[i][col] - 1] = 0;
	}
	row -= row % 3;
	col -= col % 3;
	for (i = row; i < row + 3; ++i) 
		for (j = col; j < col + 3; ++j)
			if (t[i][j])
				vacant[t[i][j] - 1] = 0;
return(0);
}

int	solve_grid_fill(char t[9][9], int row, int col)
{
	char	vacant[9];
	int	test;
	int	save;

	for (test = 0; test < 9; ++test)
		vacant[test] = test + 1;
	solve_grid_find(t, vacant, row, col);
	for (test = 0; test < 9; ++test)
	{
		if (vacant[test])
		{
			save = t[row][col];
			t[row][col] = vacant[test];
			solve_grid(t, row, col + 1);
			if (end_grid(t))
				return (0);
			t[row][col] = save;
		}
	}
	return (0);
}

int	solve_grid(char t[9][9], int row, int col)
{
	for (; row < 9; ++row)
	{
		for (; col < 9; ++col)
			if (!t[row][col])
				return (solve_grid_fill(t, row, col));
		col = 0;
	}
	return (0);
}
