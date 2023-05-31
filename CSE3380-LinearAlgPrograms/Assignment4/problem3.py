
#Name: Mary-Rose Tracy
#ID#:1001852753 
#CSE 3380 Problem 3
#3. Create a python program that determines the dimension of the following set as well
#as a basis for it. Write a file comment at the top of the file that explains your
#approach. Your file should print the result. Save your code as problem3.py
import numpy as Arr
import sympy as Sym
def RREForm(Matrix):
    return Sym.Matrix(Matrix).rref()
def main():
    #plug in matrix
    Matrix=Arr.array([[0, 1, 2],[1, 1, -2],[4, 1, 0],[3, -1, -1]],dtype='float')
    # Perform row reduction
    TheReduceMatrix, Piv=RREForm(Matrix)
    # Calculate the dimension and basis
    dimension=len(Piv)
    TheBase = [TheReduceMatrix.row(i)for i in Piv]
    # Print the results
    print(f"The dimension is:{dimension}")
    print("The basis is:")
    for Vect in TheBase:
        print(Vect)
    print("If you reduce it the bottom of the matrix=all zeros. So they are free")
    print("AKA why it's 3 dimensions for this question.")
    print("Of course we can do the vector w/out the double [], but it looks better to me w/ that.")
if __name__=="__main__":main() 
#pretty much like a return 0 almost 
