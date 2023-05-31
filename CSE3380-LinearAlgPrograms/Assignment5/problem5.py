#Name: Mary-Rose Tracy
#ID#:1001852753
import numpy as Nump
import matplotlib.pyplot as Plot
#Load dataset
data=Nump.loadtxt("dataset2.txt")
XVal=data[:,0]
YVal=data[:,1]
A=Nump.vstack([XVal, Nump.ones(len(XVal))]).T
#solution least square
solution,residuals,rank,singular_values=Nump.linalg.lstsq(A,YVal,rcond=None) 
slope,intercept=solution
Plot.scatter(XVal,YVal,label="Data set dots/points")
XGraphLine=Nump.linspace(min(XVal), max(XVal), 100)
YGraphLine=slope * XGraphLine + intercept
Plot.plot(XGraphLine, YGraphLine, 'b', label="solution for least square")
#for the graph
Plot.xlabel("X")
Plot.ylabel("Y")
Plot.title("Square Solution np.linalg.lstsq - Least Square")

Plot.legend()
Plot.show()