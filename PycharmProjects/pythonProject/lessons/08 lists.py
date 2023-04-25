from typing import List

l1 = [1, 2, 3, 4, 5, 6]
print(l1)
###############
print(l1[0])
#################
l1[2] = 7
print(l1)
############## LIST SLICING
l2 = ['hritik', 'vbspu', 20, 2000, False, 88.8]
print(l2)
print(l2[0:3])

############  LIST METHODS  ##################

l3 = [16, 6, 11, 22, 20, 2000, 88.8]
l3.sort()
print(l3)

l3.reverse()
print(l3)

l3.append(39)
print(l3)

l3.insert(2, 1)
print(l3)

l3.pop(2)
print(l3)

l3.remove(39)
print(l3)
