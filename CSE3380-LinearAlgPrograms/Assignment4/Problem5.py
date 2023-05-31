#Name: Mary-Rose Tracy
#ID#:1001852753 
#CSE 3380 Problem 5
import matplotlib.pyplot as plt
import numpy as Nump
import sympy as sp
import scipy.linalg as linalg
from mpl_toolkits.mplot3d import Axes3D
#Find a basis {a1, a2, a3} for R3. such that P is the change-of-coordinates matrix from
#{a1, a2, a3} to the basis {b1, b2, b3}.
def Cos(matrix):
    TheNorm=Nump.linalg.norm(matrix,axis=1)[:, Nump.newaxis]
    MatrixN = matrix /TheNorm
    Cos=Nump.dot(MatrixN, MatrixN.T)
    return Cos
    #return Nump.dot(MatrixN, normalized_matrix.T)
M=8
N=8
RandMat=Nump.random.randn(M, N)
finished_matrix=Cos(RandMat)
print(finished_matrix)
def plot(matrix):
    mpl_matrix= Cos(matrix)
    plt.matshow(mpl_matrix, cmap = 'bwr')
    plt.colorbar()
    plt.title("Cosine Similarity")
    plt.show()
plot(RandMat)