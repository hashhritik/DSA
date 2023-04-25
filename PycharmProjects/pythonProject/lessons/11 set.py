a={1,2,3,4,5,6,1,3,6,7}
b=set()
print(type(a))
print(a)
print(b)
# methods
b.add(77)
b.add(55)
b.add(66)
b.add(65)
#b.add([2,3,4]) # list and dictionary cant be add to set
b.add((2,3,4,2,3,4))
print(b)
print(len(b))
b.remove(65)
print(b)
print(b.pop())
print(b.union({3,6}))
print(b.intersection({3,6}))
