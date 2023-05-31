#Name: Mary-Rose Tracy
#ID#:1001852753 
#CSE 3380 Problem 2
import numpy as Nump
import numpy as Arr
#2. Create a function that, given a basis B and a vector [x]B, computes the vector x.
#Use functions from numpy, scipy, and/or sympy. Create a function comment header
#that summarizes your approach.
#In the same file, compute the the vector x given B and [x]B below and print the result. Save your code as problem2.py.
def CalcTheVect(TheBase, XVB):
    BOMat = Nump.column_stack(TheBase)
    TheSolut = Nump.linalg.solve(BOMat, XVB)
    return TheSolut
# Plug in the vectors
B=[Nump.array([0, -1, -1]),Nump.array([-4, 0, 0]),Nump.array([6, 6, 3])]
XVB=Nump.array([-2, 6, 1])
# print the result vect x
TheSolut=CalcTheVect(B,XVB)
print("Vector X:")
print(TheSolut)
