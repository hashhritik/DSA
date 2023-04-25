n=int(input("enter the number factorial you want"))
#product=1
#for i in range(n):
 #   product=product*(i+1)
#print(product)5
##############################
def fact_recur(n):
    if n==1 or n==0:
        return 1
    return n*fact_recur(n-1)

print(fact_recur(n))