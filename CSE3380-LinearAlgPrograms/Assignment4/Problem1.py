#Name: Mary-Rose Tracy
#ID#:1001852753 
#CSE 3380 Problem 1
import numpy as Arr
from sympy import Matrix
#Let's plug in the matrix's 
A=Arr.array([[3, 8, -5],[3, -6, -7],[3, 4, 2]])
b=Arr.array([-1, -1, 3])
#a) Compute the reduced echelon form of A and convert the result back to a numpy. Array. You will need sympy to compute the reduced echelon form.
AArray=Matrix(A)
ReducedEchFormOA=AArray.rref()[0]
ReducedRowEchFormOAFin=Arr.array(ReducedEchFormOA).astype(Arr.float64)
print("A) The Reduced Echelon Form A:")
print(ReducedRowEchFormOAFin)
#b) Column Space A
col_space=Matrix(A).columnspace()
print("B) Column space of A:")
for TheVector in col_space:
    print(Arr.array(TheVector).astype(Arr.float64).flatten())
#c)Solve the matrix equation Ax = b.
TheSolut=Arr.linalg.solve(A, b)
print("C) Solution of Ax = b:")
print(TheSolut)
# d)Nul A
NSpace=Matrix(A).nullspace()
print("D) Null space A:")
if len(NSpace)==0:
    print("Null space is an all zero vector, A.K.A [0,0,0]")
else: 
    for TheVector in NSpace:
        print(Arr.array(TheVector).astype(Arr.float64).flatten())