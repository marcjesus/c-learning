Gameboard has a private member 'gameSpace[4][4]' that is a 4x4 array that accepts a char for each of the 16 positions.

The class has four public members that are functions and a constructor:

the constructor sets each value of gameSpace to the char value '-'
each position to be set with a single char
each position can be read individually
printInfo will print gameSpace as a 4x4 matrix
the helper function 'fourInRow' checks every row, looking for four 'x's. When it finds four x's in the same row, it returns a '1', otherwise it returns a '0'.
You will need to complete the class Gameboard.