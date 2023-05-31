#Name: Mary-Rose Tracy
#ID#:1001852753
import numpy as Nump
import matplotlib.pyplot as plt
Mat_A=Nump.array([[1, -2], [-4, 1]])
eigenvalues,eigenvectors=Nump.linalg.eig(Mat_A)
BR1=Nump.array([1, 0])
BR2=Nump.array([0, 1])
eigen1=eigenvectors[:, 0]
eigen2=eigenvectors[:, 1]
Col1=Mat_A[:, 0]
Col2=Mat_A[:, 1]
plt.figure(figsize=(8, 8))
plt.quiver(*Nump.zeros_like(BR1), *BR1, color='r', angles='xy', scale_units='xy', scale=1, label='BR1 (1, 0)')
plt.quiver(*Nump.zeros_like(BR2), *BR2, color='b', angles='xy', scale_units='xy', scale=1, label='BR2 (0, 1)')
plt.quiver(*Nump.zeros_like(Col1), *Col1, color='g', angles='xy', scale_units='xy', scale=1, label='Col1')
plt.quiver(*Nump.zeros_like(Col2), *Col2, color='y', angles='xy', scale_units='xy', scale=1, label='Col2')
plt.quiver(*Nump.zeros_like(eigen1), *eigen1, color='c', angles='xy', scale_units='xy', scale=1, label='EigenVect1')
plt.quiver(*Nump.zeros_like(eigen2), *eigen2, color='m', angles='xy', scale_units='xy', scale=1, label='EigenVect2')
plt.xlim(-5,5)
plt.ylim(-5,5)
plt.xlabel('X')
plt.ylabel('Y')
plt.legend()
plt.grid()
plt.title('(SVD) or Standard Basis vectors,Column vect of Matrix A, & EigenVect')

plt.show()