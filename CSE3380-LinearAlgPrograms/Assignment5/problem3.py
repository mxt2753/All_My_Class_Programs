#Name: Mary-Tose Tracy
#ID#:1001852753
import numpy as np
from scipy.linalg import qr
#Define the matrix we are playing with
A=np.array([[1,0,4],[-2,3,-2],[-2,0,6]])
#Calc the QR factor
Q,R=qr(A)
print("Q:")
print(Q)
print("\nR:")
print(R)
ComputeTheR=Q.T @ A
# Print ComputeTheR
print("\nR when we use Q:")
print(ComputeTheR)