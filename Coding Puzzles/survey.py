import math
import numpy as np
 
sample = []
for i in range(1, 8):
    day = str(input()).replace("0", "")
    sample.append( np.longdouble(len(day)) )
 
n = np.longdouble(len(sample)) 
mean = np.longdouble(sum(sample)) / n   # mean
var  = np.longdouble(sum( pow(x - mean, 2) for x in sample)) / n  # variance
std  = np.longdouble(math.sqrt(var))  # standard deviation
 
print(round(std, 4))