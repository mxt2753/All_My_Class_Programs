#Name: Mary-Rose Tracy
#ID#:1001852753
import numpy as Nump
import matplotlib.pyplot as Pplot
# We are going to replace FP
data=Nump.loadtxt('dataset1.txt')
XVal=data[:,0]
YVal=data[:,1]
A=Nump.vstack([XVal,Nump.ones(len(XVal))]).T
solution,residuals,rank,singular_values=Nump.linalg.lstsq(A,YVal,rcond=None)
slope,intercept=solution
#for the map to show
Pplot.scatter(XVal,YVal,label='dataset dots/points',color='purple')
Pplot.plot(XVal,slope*XVal+intercept,label='fit of least square',color='green')
Pplot.xlabel('X')
Pplot.ylabel('Y')
#put it in the legend of the map
Pplot.legend()
Pplot.show()