#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in the grid.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of lists of integers representing an island.

    Returns:
        The perimeter of the island defined in grid.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                    if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                    return perimeter

