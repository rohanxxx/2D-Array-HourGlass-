Problem:

Given a 6 X 6 2D Array, arr:

    1 1 1 0 0 0
    0 1 0 0 0 0
    1 1 1 0 0 0 
    0 0 0 0 0 0 
    0 0 0 0 0 0
    0 0 0 0 0 0 

We define an hourglass in A to be a subset of values with indices falling in
this pattern in arr's graphical representation:

    a b c
      d
    e f g

There are 16 hour glasses in arr, and an hourglass sum is the sum of an
hourglass' values. Calculate the hourglass sum for every hourglass is arr,
then print the maximum hourglass sum.

Input Format:
    Each of the 6 lines of input arr[i] contains 6 space-seperated integers
    arr[i][j].

Output Format:
    Print the largest (maximum) hourglass sum found in arr.

Sample Input:

    1 1 1 0 0 0
    0 1 0 0 0 0
    1 1 1 0 0 0
    0 0 2 4 4 0
    0 0 0 2 0 0
    0 0 1 2 4 0

Sample Output:

    19


Explanation:

arr contains the following hourglasses -

    1 1 1  1 1 0  1 0 0  0 0 0
      1      0      0      0
    1 1 1  1 1 0  1 0 0  0 0 0

    0 1 0  1 0 0  0 0 0  0 0 0
      1      1      0      0
    0 0 2  0 2 4  2 4 4  4 4 0

    1 1 1  1 1 0  1 0 0  0 0 0
      0      2      4      4
    0 0 0  0 0 2  0 2 0  2 0 0

    0 0 2  0 2 4  2 4 4  4 4 0
      0      0      2      0
    0 0 1  0 1 2  1 2 4  2 4 0

The hourglasses with the maximum sum (19) is -

    2 4 4
      2
    1 2 4

