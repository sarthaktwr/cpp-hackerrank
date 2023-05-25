import numpy as np

n = [1, 5, 7, 8, 9]

for i in range(len(n)):
    for l in range(i, len(n)):
        if n[i] < n[l]:
            n[i], n[l] = n[l], n[i]
        
print(n)